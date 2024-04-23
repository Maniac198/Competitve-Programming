#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      ll long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

void solve(){
    int n,c,d; cin >> n >> c >> d; 
    vector<int> v(n*n), b; 

    int sz = n*n;
    for(int i = 0; i < sz; i++){
        cin >> v[i];
    }

    int mn = *min_element(all(v));

    for(int i = 0; i < n; i++){
        int ele = mn+c*i;
        b.push_back(ele);
        for(int j = 1; j < n; j++){
            b.push_back(ele+d*j);
        }
    }

    sort(all(b));
    sort(all(v));
    
    for(int i = 0; i < sz; i++){
        if( b[i] != v[i] ){
            no; return;
        }
    }

    yes;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}