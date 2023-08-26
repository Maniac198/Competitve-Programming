#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      rep(i,a,b) for(int i = a; i < b; i++)
#define      dep(x,a,b) for(int x = a; x >= b; --x)
#define      int long long 
#define      endl '\n';
const        int MOD = 1e9 + 7;
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }

void solve()
{
    int n,k,x; cin>>n>>k>>x;

    vector<int> v(n);
    rep(i,0,n){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int y = 0;

    vector<int> diff_arr;

    rep(i,0,n-1){
        if(abs(v[i]-v[i+1]) > x){
            y++;
            diff_arr.push_back(abs(v[i]-v[i+1]));
        }
    }

    sort(diff_arr.begin(),diff_arr.end());

    int count = 0;

    rep(i,0,diff_arr.size()){
        int diff = diff_arr[i];
        int k_cost;
        if(diff % x == 0){
            k_cost = diff/x -1 ;
        }
        else{
            k_cost = diff/x;
        }

        if(k - k_cost >= 0){
            count ++;
            k -= k_cost;
        }
    }

    cout<<y-count+1;
}
     
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}