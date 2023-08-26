#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve()
{
    string s; cin>>s;

    int n = 10;
    string a = s, b = s;

    rep(i,0,n){
        if(s[i] == '?'){
            if(i%2==0 && a[i]=='?'){
                a[i] = '1';
                b[i] = '0';
            }
            else if(i%2==1 && a[i] =='?'){
                a[i] = '0';
                b[i] = '1';
            }
        }
    }

    int aa = 0,bb = 0;
    int index_a = INT_MAX,index_b = INT_MAX;
    rep(i,0,n){
        if(a[i] == '1'){
            if(i%2==0) aa++;
            else bb++;
        }

        if(aa-bb>(n-i)/2){
            index_a = i; 
            break; 
        }
    }

    aa = 0;
    bb = 0;

    rep(i,0,n){
        if(b[i] == '1'){
            if(i%2==0) aa++;
            else bb++;
        }

        if(bb-aa>(n-1-i)/2){
            index_b = i; 
            break; 
        }
    }

    int ans = 9;
    ans = min(min(index_a,index_b),ans);
    cout<<ans+1<<endl;

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