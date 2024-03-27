#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>

class Logger {
public:
    static void log(const std::string& message) {
        std::ofstream logFile("log.txt", std::ios_base::app);
        if (logFile.is_open()) {
            std::time_t now = std::time(nullptr);
            logFile << std::ctime(&now) << ": " << message << std::endl;
            logFile.close();
        } else {
            std::cerr << "Failed to open log file" << std::endl;
        }
    }
};

class FileProperties {
private:
    std::string filename;
    std::string type;
    std::time_t creationTime;
    std::time_t modificationTime;
    size_t size;

public:
    FileProperties(const std::string& filename, const std::string& type, size_t size)
        : filename(filename), type(type), size(size) {
        creationTime = std::time(nullptr);
        modificationTime = creationTime;
    }

    const std::string& getFilename() const {
        return filename;
    }

    const std::string& getType() const {
        return type;
    }

    std::time_t getCreationTime() const {
        return creationTime;
    }

    std::time_t getModificationTime() const {
        return modificationTime;
    }

    size_t getSize() const {
        return size;
    }

    void setModificationTime(std::time_t time) {
        modificationTime = time;
    }
};

class File {
private:
    FileProperties properties;
    std::string content;
    bool deleted;

public:
    File(const std::string& filename, const std::string& type, size_t size)
        : properties(filename, type, size), deleted(false) {}

    const FileProperties& getProperties() const {
        return properties;
    }

    std::string getContent() const {
        return content;
    }

    void setContent(const std::string& newContent) {
        content = newContent;
        properties.setModificationTime(std::time(nullptr));
        properties.setSize(newContent.size());
    }

    bool isDeleted() const {
        return deleted;
    }

    void markAsDeleted(bool status = true) {
        deleted = status;
    }
};

class UserBin {
private:
    std::vector<File> deletedFiles;

public:
    void addToBin(const File& file) {
        deletedFiles.push_back(file);
    }

    void restoreFile(const std::string& filename) {
        auto it = std::find_if(deletedFiles.begin(), deletedFiles.end(),
                               [&filename](const File& file) {
                                   return file.getProperties().getFilename() == filename;
                               });
        if (it != deletedFiles.end()) {
            it->markAsDeleted(false);
        }
    }
};

class User {
private:
    std::string name;
    bool canRead;
    bool canWrite;
    bool canExecute;
    UserBin bin;

public:
    User(const std::string& name, bool canRead, bool canWrite, bool canExecute)
        : name(name), canRead(canRead), canWrite(canWrite), canExecute(canExecute) {}

    const std::string& getName() const {
        return name;
    }

    bool hasReadPermission() const {
        return canRead;
    }

    bool hasWritePermission() const {
        return canWrite;
    }

    bool hasExecutePermission() const {
        return canExecute;
    }

    UserBin& getBin() {
        return bin;
    }
};

class Directory {
private:
    std::string dirname;
    std::vector<File> files;
    std::vector<Directory> subdirectories;
    User owner;

public:
    Directory(const std::string& dirname, const User& owner) : dirname(dirname), owner(owner) {}

    void createFile(const std::string& filename, const User& user) {
        if (user.hasWritePermission()) {
            files.emplace_back(filename, "txt", 0); // Assuming text files with initial size 0
            Logger::log("File '" + filename + "' created by user '" + user.getName() + "'.");
        } else {
            std::cerr << "Permission denied: Cannot create file" << std::endl;
        }
    }

    void deleteFile(const std::string& filename, const User& user) {
        if (user.hasWritePermission()) {
            auto it = std::find_if(files.begin(), files.end(),
                                   [&filename](const File& file) {
                                       return file.getProperties().getFilename() == filename;
                                   });
            if (it != files.end()) {
                user.getBin().addToBin(*it);
                files.erase(it);
                Logger::log("File '" + filename + "' deleted by user '" + user.getName() + "'.");
            } else {
                std::cerr << "File '" << filename << "' not found." << std::endl;
            }
        } else {
            std::cerr << "Permission denied: Cannot delete file" << std::endl;
        }
    }

    std::vector<std::string> listFiles() const {
        std::vector<std::string> filenames;
        for (const auto& file : files) {
            filenames.push_back(file.getProperties().getFilename());
        }
        return filenames;
    }

    void deleteBatchFiles(const std::vector<std::string>& filenames, const User& user) {
        for (const auto& filename : filenames) {
            deleteFile(filename, user);
        }
    }
};

class FileManager {
private:
    Directory rootDirectory;
    Directory* currentDirectory;
    User currentUser;

public:
    FileManager(const User& user) : rootDirectory("root", user), currentDirectory(&rootDirectory), currentUser(user) {}

    void createFile(const std::string& filename) {
        currentDirectory->createFile(filename, currentUser);
    }

    void deleteFile(const std::string& filename) {
        currentDirectory->deleteFile(filename, currentUser);
    }

    void changeDirectory(const std::string& dirname) {
        // Implementation omitted for brevity
    }

    std::vector<std::string> listFiles() const {
        return currentDirectory->listFiles();
    }

    void deleteBatchFiles(const std::vector<std::string>& filenames) {
        currentDirectory->deleteBatchFiles(filenames, currentUser);
    }
};

int main() {
    User user("John", true, true, false);
    FileManager fm(user);

    fm.createFile("test.txt");
    std::cout << "File 'test.txt' created." << std::endl;
    fm.deleteFile("test.txt");
    std::cout << "File 'test.txt' deleted." << std::endl;

    return 0;
}
