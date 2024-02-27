#include <bits/stdc++.h>
using namespace std; 

int f();
void use_somehow(int a);
bool is_good(int x);

int nxt(){
    int x; cin>>x; 
    return x; 
}

#define all(x) (x).begin(),(x).end()

int main() {

    // Minimum
    int x = min({1,2,3,4});

    // Find key in Map, Sets, 
    map<int,int> mp; 
    auto key = mp.count(x);

    // Shorter version of IF
    if (int x = f(); is_good(x)) {
        use_somehow(x);
    }

    // lambda Function
    auto choose2 = [&](int n) -> long long {
        if (n <= 1) {
            return 0;
        } else {
            return 1ll * n * (n - 1) / 2;
        }
    };

    // Print Binary Representation
    cout<< bitset<32> (23) <<endl;
    cout<< hex << x << endl;
    cout<< dec << x << endl;
    cout<< oct << x << endl;

    // Binary Search 
    vector<int> vec;
    if (binary_search(all(vec), key)) {
    // ...
    }

    // create set from vector
    set<int> s(all(vec));

    // rotate vector 
    // rotate(begin , middle , end) --> (middle , end, begin)
    int k; 
    rotate(vec.begin(), vec.begin() + k, vec.end());


    // use of nxt()
    auto nxt = []() -> int { 
        int x; cin>>x; 
        return x; 
    };

    int p = nxt();

    // Unique Function
    sort(all(vec));
    vec.resize(unique(all(vec)) - vec.begin());

    // builtin functions
    int a = __builtin_popcount(x); // set bit count
    int b = __builtin_ffs(x); // leading zeroes
    int c = __builtin_ctz(x); // trailing zeroes

    // check for sort 
    bool ans = is_sorted(all(vec));

    // add into vector begining
    vec.insert(vec.begin(), 1);
    
    // remove all elements from vector
    vec.clear();

    // priority queue defination
    priority_queue<int,vector<int>,greater<int>> q(vec.begin(),vec.end()); 
}

