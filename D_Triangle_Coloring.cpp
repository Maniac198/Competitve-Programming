#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int mod = 998244353;

int power(int a, int b, int m = mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
int invmod(int a, int m = mod) {return power(a, m - 2, m);} 
int mAdd(int a, int b, int m = mod) {return (((a + b) % m) + m) % m;}
int mSub(int a, int b, int m = mod) {return (((a - b) % m) + m) % m;}
int mMul(int a, int b, int m = mod) {return (((a * b) % m) + m) % m;}
int mDiv(int a, int b, int m = mod) {return mMul(a, invmod(b), m);}

int N = 1e6 + 1;
 
vector<int> factorial (N, 1);
vector<int> invFactorial (N, 1);

void prenCr(){
    for (int i = 2; i < N; i++){
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

void solve(){
    int n; cin >> n; 
    vector<int> v(n);
    rep(i,0,n) cin>>v[i];

    int m = 998244353; 
    int ans = 1; 
    for(int i = 0; i<n; i=i+3){
        int mn = *min_element(v.begin()+i,v.begin()+i+3);
        int mnCount = count(v.begin()+i,v.begin()+i+3,mn); 
        
        ans = mMul(ans,mnCount,m);
    }

    int ncr = nCr(n/3,n/6);

    cout << mMul(ans,ncr) << endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    prenCr();
    solve();
}