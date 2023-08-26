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
    int n; cin>>n; 
    vector<int> v(n); 
    map<int,int> freq;

    rep(i,0,n){
        cin>>v[i];
        freq[v[i]]++;
    }

    int sum = accumulate(vb,ve,0LL);


    if((2*sum) % n != 0){
        cout<<0<<endl;
        return;
    }
    
    int count = 0;
    int tosearch = (2*sum)/n;

    rep(i,0,n){
        int a1 = v[i];
        int a2 = tosearch - a1;
        if(freq.count(a2)) count += freq[a2];
        if(a1==a2) count--;
    }

    cout<<count/2<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}