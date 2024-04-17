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

int digitSum( int num ){
    int sum = 0; 
    while( num ){
        sum += (num%10);
        num /= 10;
    }
    return sum;
}

void solve(){
    int n, q; cin >> n >> q;

    vector<int> v(n);
    set<int> st;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        if( v[i] > 9 ) st.insert(i);
    }

    while( q-- ){
        int ch; cin >> ch;

        if( ch == 2 ){
            int x; cin >> x; 
            x--;
            cout << v[x] << endl;
        }
        else{
            int l, r; cin >> l >> r;    
            l--; r--;
            int query = l;
            while( !st.empty() ){
                auto it = st.lower_bound(query);
                if( it == st.end() || *it > r ) break;

                v[*it] = digitSum(v[*it]);
                int pos = *it; 
                st.erase(it);
                if( v[pos] > 9 ){
                    st.insert(pos);
                }
                
                query = pos + 1;
            }
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