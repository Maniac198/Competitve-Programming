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
    int n,m; cin >> n >> m;
    int v[n][m];
    rep(i,0,n){
        rep(j,0,m){
            cin >> v[i][j];
        }
    }

    int maxi = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){

            int r = i, c = j;
            int score = 0;

            // r-- c--
            while(r>=0 && r<n && c>=0 && c<m){
                score += v[r][c];
                r--; c--;
            }
            // r-- c++
            r = i, c = j;
            while(r>=0 && r<n && c>=0 && c<m){
                score += v[r][c];
                r--; c++;
            }
            // r++ c--
            r = i, c = j;
            while(r>=0 && r<n && c>=0 && c<m){
                score += v[r][c];
                r++; c--;
            }
            // r++ c++
            r = i, c = j;
            while(r>=0 && r<n && c>=0 && c<m){
                score += v[r][c];
                r++; c++;
            }
        
            score -= v[i][j]*3;
            maxi = max(maxi,score);
        }
    }

    cout << maxi << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}