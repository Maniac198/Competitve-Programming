#include <bits/stdc++.h>
using namespace std; 

int query(int l, int r){  
    cout <<"? " << r-l+1 <<" ";
    for(int i = l; i <= r; i++){
        cout << i << " ";
    }
    cout << endl;
    int sum; cin >> sum;

    return sum;
}

void solve(){
    int n; cin >> n; 
    vector<int> v(n+1,0);
    for(int i = 1; i<=n; i++){
        cin >> v[i];
        v[i] += v[i-1];
    }

    int l = 1, r = n;
    int ans = -1;
    while( l <= r ){
        int mid = (l+r)/2;

        int a = query(1,mid);
        int s = v[mid];

        if(a != s){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }

    cout << "! " << ans << endl;
    return;
}

int main(){
    int t; cin >> t; 

    while(t--){
        solve();
    }
}