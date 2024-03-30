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
    vector<ll> lastPos (k+1, -1);
    vector<ll> maxJump (k+1);
    vector<ll> secondMaxJump (k+1, -1);
 
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
 
        if(i - lastPos[num] - 1 >= maxJump[num]){
            secondMaxJump[num] = maxJump[num];
            maxJump[num] = i - lastPos[num] - 1;
        }
        else if(i - lastPos[num] - 1 >= secondMaxJump[num]){
            secondMaxJump[num] = i - lastPos[num] - 1;
        }
        lastPos[num] = i;
    }
 
    ll ans = n + 1;
 
    for (ll i = 0; i <= k; i++)
    {
        if(lastPos[i] != -1){
            if(n - lastPos[i] - 1 >= maxJump[i]){
                secondMaxJump[i] = maxJump[i];
                maxJump[i] = n - lastPos[i] - 1;
            }
            else if(n - lastPos[i] - 1 >= secondMaxJump[i]){
                secondMaxJump[i] = n - lastPos[i] - 1;
            }
            ans = min(ans, max(maxJump[i]/2, secondMaxJump[i]));
        }
    }
    
    cout << ans << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}