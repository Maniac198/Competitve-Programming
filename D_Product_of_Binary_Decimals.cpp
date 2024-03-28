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

vector<int> Bin = {10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111};
int sz = Bin.size();
map<int,int> factors;

void solve(){   
    int n; cin >> n; 
    if(n == 1 || factors[n] ){
        yes; return;
    }

    int res = 0;
    while(n >= 10){
        for(auto it : Bin){
            if(n%it == 0){
                res = 0;
                n /= it;
                
                if(factors[n]){
                    yes; return;
                }
                else{
                    break;
                }
            }
            else{
                res++;
            }
        }

        if(res == sz){
            no; return;
        }
    }

    if(factors[n]){
        yes; return;
    }

    no;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for(auto it : Bin){
        factors[it] = 1;
    }

    int t; cin >> t;
    while(t--){
        solve();
    }
}