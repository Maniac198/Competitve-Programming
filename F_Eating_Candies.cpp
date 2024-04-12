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
    vector<int> v(n); 
    rep(i,0,n) cin >> v[i];

    if( n == 1 ){
        cout << 0 << endl;
        return;
    }

    int i = 0, j = n-1;
    int sa = v[i], sb = v[j];
    int len = 0;
    while ( i < j ){
        if( sa == sb ){
            len = max(len,i+1+(n-j));
        }
        
        if( sa <= sb ){
            i++;
            sa += v[i];
        }
        else{
            j--;
            sb += v[j];
        }
    }

    cout << len << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}