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

void solve(){
    int n; cin>>n; 
    // vector<string> v(2);
    // cin>>v[0]>>v[1];
    string s1,s2; cin >> s1 >> s2;

    // if(v[1][n-2] == '<'){
    //     no; return;
    // }

    // int x = 1, y = n-2; 
    // while(y>0){
    //     if(v[(x+1)%2][y-1] == '>'){
    //         x = (x+1)%2;
    //         y = y-1;
    //     }
    //     else if(y>=2 and v[x][y-2]== '>'){
    //         y = y-2;
    //     }
    //     else{
    //         no; return;
    //     }
    // }

    // yes; 

    bool check=false;
    for (int  i = 1; i < n; i+=2){
        if((s1[i]=='<'&&s2[i-1]=='<')||s1[i]=='<'&&s2[i+1]=='<'){
            cout<<"NO"<<endl;
            return;
        }
    }
    
    cout<<"YES"<<endl;
    
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}