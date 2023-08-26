Assignment 2A
// Zombie Process
#include <iostream>
#include <unistd.h>
#include <sys/types.h>
    using namespace std;
int main()
{
    pid_t p;
    p = fork();
    if (p == 0)
    { // child
        cout << "I am a child Process My PID is : " << int(getpid()) << endl;
        cout << "My parent PID is : " << int(getppid()) << endl;
    }
    else
    { // parent
        sleep(10);
        // to avoid zombie process use wait(NULL) instead sleep()
        cout << "I am a parent Process My PID is : " << int(getpid()) << endl;
        cout << "My child PID is : " << int(p) << endl;
    }
}
OUTPUT : I am a child Process My PID is : 23068 My parent PID is : 23066 I am a parent Process My PID is : 23066 My child PID is : 23068 Process Info 501 23068 23066 2006 0 0 0 0 0 - Z + 0 ttys057 0 : 00.00 < defunct > 11 : 32AM
// Orphan process
#include <iostream>
#include <unistd.h>
#include <sys/types.h>
    using namespace std;
int main()
{
    pid_t p;
    p = fork();
    if (p == 0)
    { // child
        sleep(40);
        cout << "I am a child Process My PID is : " << int(getpid()) << endl;
        cout << "My parent PID is : " << int(getppid()) << endl;
    }
    else
    { // parent
        sleep(2);
        cout << "I am a parent Process My PID is : " << int(getpid()) << endl;
        cout << "My child PID is : " << int(p) << endl;
    }
}
Output
        I am a parent Process My PID is : 23670 My child PID is : 23677 sahil @Sahils -
    MacBook - Air OSL % I am a child Process My PID is : 23677 My parent PID is : 1
// Array Sorting
#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <vector>
#include <bits/stdc++.h>
                  using namespace std;
void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    vector<int> arr = {1, 3, 2, 4, 5, 6, 3, 5, 6, 10};
    pid_t pid = fork();
    if (pid == 0)
    { // Child process
        cout << "\nChild Process:\n";
        bubbleSort(arr);
        cout << "I am a child Process My PID is : " << int(getpid()) << endl;
        cout << "My Parent PID is : " << int(getppid()) << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cout << " " << arr[i];
        }
        cout << endl;
        cout << "Sorted by Child Process." << endl;
    }
    else
    { // parent process
        sleep(20);
        cout << endl
             << "I am a parent My PID is : " << int(getpid()) << endl;
        cout << "Sorting array in Parent Process" << endl;
        bubbleSort(arr);
        for (int i = 0; i < arr.size(); i++)
        {
            cout << " " << arr[i];
        }
        cout << "Sorted by Parent Process. " << endl;
        wait(NULL);
    }
}
Output : Child Process : I am a child Process My PID is : 24913 My Parent PID is : 24911 1 2 3 3 4 5 5 6 6 10 Sorted by Child Process.I am a parent My PID is : 24911 Sorting array in Parent Process 1 2 3 3 4 5 5 6 6 10 Sorted by Parent Process.