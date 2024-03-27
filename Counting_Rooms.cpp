#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
const        int MOD = 1e9 + 7;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

void dfs(vector<string> &v,vector<vector<int>> &vis,int i,int j,int n,int m){
    vis[i][j] = 1; 

    for(int k = 0; k<4; k++){
        int nr = i + dx[k];
        int nc = j + dy[k];

        if(nr>=0 and nr<n and nc>=0 and nc<m and v[nr][nc]=='.' and vis[nr][nc] == 0){
            dfs(v,vis,nr,nc,n,m);
        }
    }
}

void solve(){
    int n,m; cin>>n>>m; 
    vector<vector<int>> vis(n,vector<int>(m,0));

    vector<string> v(n);
    rep(i,0,n){
        cin>>v[i];
    }

    int cnt = 0;
    rep(i,0,n){
        rep(j,0,m){
            if(vis[i][j] == 0 and v[i][j] == '.'){
                cnt++;
                dfs(v,vis,i,j,n,m);
            }
        }
    }

    cout<<cnt<<endl;
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}