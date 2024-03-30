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
    int n,k; cin >> n >> k; 
    vector<int> v(n+1),l(k+1,n+1),r(k+1,-1),sl,sr; 
    set<int> s; 
    rep(i,1,n+1){
        cin >> v[i];
        l[v[i]] = min(l[v[i]],i);
        r[v[i]] = i;
        s.insert(v[i]);
    }

    sl = l;
    sr = r;

    rep(i,k,1){
        sl[i] = min(sl[i],sl[i+1]);
        sr[i] = max(sr[i],sr[i+1]);
    }

    rep(i,1,k+1){
        if(s.count(i)){
            cout << 2*(sr[i]-sl[i] + 1) << ' ';
        }
        else{
            cout << 0 << ' ';
        }
    }

    cout << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}