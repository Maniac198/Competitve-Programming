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
    int a,b; cin>>a>>b;

    if(b%a == 0){
        int rem = b/a;
        int count = 0;

        while(rem%2 == 0){
            rem /= 2; count ++;
        }

        while(rem%3 == 0){
            rem /= 3; count ++;
        }

        if(rem == 1){
            cout<<count;
        }else{
            cout<<-1;
        }
    }
    else{
        cout<<-1;
    }
    
}   
     
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}