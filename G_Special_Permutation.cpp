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
    int n; cin >> n; 
    if( n == 2 || n == 3 ){
        cout << -1 << endl; 
        return;
    }

    vector<int> v;
    if( n&1 ){
        for(int i = 2; i <= n; i += 2) v.push_back(i);
        swap(v[n/2-1],v[n/2-2]);
        for(auto it : v) cout << it << " ";
        for(int i = n; i>=1; i-=2) cout << i << " ";
        cout << endl;
    }
    else{
        for(int i = 2; i <= n; i+=2) cout << i << " ";
        for(int i = n-1; i >= 1; i -= 2) v.push_back(i);
        swap(v[0],v[1]);
        for(auto it : v) cout << it << " ";
        cout << endl;
    }
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}