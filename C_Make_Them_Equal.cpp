#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      vi vector<int>
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve()
{
    int n; 
    char c; 
    string s; 
    cin>>n>>c>>s;

    bool zero = true; 
    rep(i,0,n){
        if(s[i] != c){
            zero = false; 
            break;
        }
    }

    if(zero){
        cout<<0<<endl;
        return;
    }
    
    int repeated = -1;
    rep(i,2,n+1){
        int notc = 0;
        for(int j=i; j<=n; j+=i){
            if(s[j-1]!=c) notc++;
        }

        if(notc == 0){
            repeated = i;
            break;
        }
    }

    if(repeated != -1){
        cout<<1<<"\n"<<repeated<<endl;
    }
    else{
        cout<<2<<"\n"<<n-1<<" "<<n<<endl;
    }
}
     
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}