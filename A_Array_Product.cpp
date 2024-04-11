#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int n; cin >> n; 
    vector<int> v(n); 
    for(auto & it : v) cin >> it;

    int mxe = -1e9, mxo = -1e9;
    for(auto it : v){
        if( it&1 ){
            if( it > mxo ) mxo = it;
        }
        else{
            if( it > mxe ) mxe = it;
        }
    }

    if( mxo == -1e9 || mxe == -1e9 ){
        cout << -1 << endl;
    }
    else{
        cout << mxo * mxe * 1ll << endl;
    }

}