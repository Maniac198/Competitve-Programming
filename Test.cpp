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

bool check(int mid, vector<int> v, int color,int n){
    bool ok = true;
    vector<bool> isReachable(n,false);
    for(int i = 0; i<n; i++){
        int j = i; 
        while( j < i + mid ){
            if(v[j] == color){
                isReachable[j] = true;
                i = j;
                break;
            }   
            isReachable[j] = true;
            j++;
        }

        if(ok and v[j] != color){
            i = j+1;
            ok = false;
        }
    }

    if(isReachable[n-1]) return true;

    return false;
}

void solve(){
    int n; cin >> n; 
    vector<int> v(n); 
    rep(i,0,n){
        cin >> v[i]; 
        v[i]--;
    }

    cout << check(2,v,1,7) << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
}