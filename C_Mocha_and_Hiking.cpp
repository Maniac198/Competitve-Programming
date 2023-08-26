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
    int n; cin>>n; 
    vector<int> v(n);
    rep(i,0,n){
        cin>>v[i];
    }

    if(v[0] == 1){
        cout<<n+1<<" ";
        rep(i,1,n+1){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else if(v[n-1] == 0){
        rep(i,1,n+2){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        int index = -1;
        rep(i,0,n-1){
            if(v[i] == 0 && v[i+1] == 1) index = i+1;
        }

        if(index == -1){
            cout<<-1<<endl;
            return;
        }

        rep(i,1,index+1){
            cout<<i<<" ";
        }

        cout<<n+1<<" ";

        rep(i,index+1,n+1){
            cout<<i<<" ";
        }
        cout<<endl;
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