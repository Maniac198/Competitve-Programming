#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      vb v.begin()
#define      ve v.end()
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve(){
    int m,k,a,b; cin>>m>>k>>a>>b;

    
    if(a>=m || (m%k<=a && m/k<=b)){ 
        cout<<0<<endl;
    } 
    else{

        int kxtra = min(m/k,b);
        int xtra = min(m-k*kxtra,a); 
        int remain = m-xtra-k*kxtra;

        if(remain%k==0){ 
            cout<<remain/k<<endl;
        }
        else if((k-remain%k) <= xtra ){ 
            cout<<(remain/k)+1<<endl;
        }
        else{
            cout<<(remain/k)+(remain%k)<<endl;
        }
        
    }
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}