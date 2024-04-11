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
    string s; cin >> s; 

    if(n == 1){
        cout << "Bob" << endl;
        return;
    }

    int c0 = count(all(s),'1');
    int c1 = count(all(s),'0');

    if( n&1 ){  
        int diff = abs(c0-c1);

        if(diff == 1){
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
    else{
        if( c0 == c1 ){
            cout << "Bob" << endl;
        }
        else{
            cout << "Alice" << endl;
        }
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