#include <bits/stdc++.h>
using namespace std;

#define 		yes {cout<<"YES"<<endl;}
#define 		no {cout<<"NO"<<endl;}
#define 		rep(i,a,b) for(int i=a;i<b;i++)
#define 		dep(x, a, b) for(int x = a; x >= b; -- x)
#define 		int long long 
#define 		endl '\n';
const 			int MOD = 1e9 + 7;
int 			lcm(int a,int b) { return a/__gcd(a,b)*b; }

int gcd(int a, int b);
int power(int x, unsigned int y, unsigned int M);
int modInverse(int A, int M)
{
    return power(A, M - 2, M);
}
int power(int x, unsigned int y, unsigned int M)
{
    if (y == 0)
        return 1;
 
    int p = power(x, y / 2, M) % M;
    p = (p * p) % M;
 
    return (y % 2 == 0) ? p : (x * p) % M;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1); 
}

void solve()
{
    int n; cin>>n; 

    map<int,int> mp;
    vector<int> v(n);
    rep(i,0,n){
        int tp; 
        cin>>v[i]>>tp;
    }   

    rep(i,0,n){
        mp[v[i]]++;
    }

    int ans = 1;
    for (auto it : mp)
    {
        ans *= factorial(it.second);
    }   


    int final = factorial(n)/ans;

    cout<<modInverse(final,MOD);
}
		
signed main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve();
}