#include <bits/stdc++.h>
using namespace std; 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> st;
// order_by_key()
// find_by_order()

int f();
void use_somehow(int a);
bool is_good(int x);

const int MOD = 1e9 + 7;

int power(int a, int b, int m = MOD) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % MOD; a = (a * a) % MOD; b = b >> 1;} return res;}
 
int invMOD(int a, int m = MOD) {return power(a, m - 2, m);} //For prime MOD
 
int mAdd(int a, int b, int m = MOD) {return (((a + b) % m) + m) % m;}
int mSub(int a, int b, int m = MOD) {return (((a - b) % m) + m) % m;}
int mMul(int a, int b, int m = MOD) {return (((a * b) % m) + m) % m;}
int mDiv(int a, int b, int m = MOD) {return mMul(a, invMOD(b), m);}

int N = 1e6 + 1;
 
vector<int> factorial (N, 1);
vector<int> invFactorial (N, 1);
 
//Call this in main function
void prenCr(){
    for (int i = 2; i < N; i++)
    {
        factorial[i] = mMul(i, factorial[i-1]);
        invFactorial[i] = mDiv(1, factorial[i]);
    }
}
 
int nCr(int n, int r){
    if(r > n || r < 0){
        return 0;
    }
    return mMul(factorial[n], mMul(invFactorial[r], invFactorial[n-r]));
}

int ncr(int n, int r){
    double sum = 1; 
    for(int i = 1; i <= r; i++){
        sum = sum * (n - r + i) / i;
    }
    return (int) sum;
}

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

    // use of bs on multiset and vector
    multiset<int> ms;           // use when bs and removal simultaneously
    ms.upper_bound(key);
    
}

