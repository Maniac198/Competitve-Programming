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

    int sa = 1,sb = 1,la = 1,lb = 1; 
    int lena = 1, lenb = 1;
    while(n--){
        int move,k; 
        string s; 
        cin>>move>>k>>s; 

        if(move == 1){
            lena += (s.size() * k);
            rep(i,0,s.size()){
                int p = s[i]-'a'+1;
                sa = min(sa,p);
                la = max(la,p);
            }
        }
        else{   
            lenb += (s.size() * k);
            rep(i,0,s.size()){
                int p = s[i]-'a'+1;
                sb = min(sb,p);
                lb = max(lb,p);
            }
        }

        if(sa < lb){
            yes; continue;
        }
        else if(la == lb){
            if(lena < lenb){
                yes; continue;
            }
            else{
                no; continue;
            }
        }
        else{
            no; continue;
        }
    }
}
     
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}