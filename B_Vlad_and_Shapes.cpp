#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

bool check(int p,int q,vector<string> &s,int n){
    int dx[] = {0,1,1};
    int dy[] = {1,0,1};

    for(int i = 0; i<3; i++){
        int nr = p+dx[i];
        int nc = q+dy[i];
        if(nr<n && nc < n && s[nr][nc] != '1'){
            return false;
        }
    }

    return true;
}

void solve(){
    int n= nxt();
    vector<string> v(n);
    for(auto &it : v) cin>>it; 

    int newi=-1,newj= -1;
    int endi=-1,endj=-1;
    int lenght = 0, flag = 1;
    rep(i,0,n){
        int cnt = 0;
        rep(j,0,n){
            
            if(v[i][j] == '1'){
                if(flag){
                    newi = i;
                    newj = j;
                    flag = 0;
                }
                cnt++;
            }
        }
        lenght = max(lenght,cnt);
        cnt = 0;
    }

    if(newi == -1 && newj == -1){
        cout << "TRIANGLE\n";
        return;
    }

    rep(i,newi,newi+lenght){
        rep(j,newj,newj+lenght){
            if(v[i][j] != '1'){
                cout << "TRIANGLE\n";
                return;
            }
        }
    }
    cout << "SQUARE\n";

}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}