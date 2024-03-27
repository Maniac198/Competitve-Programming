#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n, m;
    cin >> n >> m;

    int d1, d2, d3;

    cout << "? 1 1" << endl;

    cin >> d1;

    cout << "? 1 " << m << endl;

    cin >> d2;

    int x, y;

    x = ((d1 + d2) - (m - 1)) / 2 + 1;
    y = d1 - x + 2;

    if (1 <= x && x <= n && 1 <= y && y <= m) {
        cout << "? " << x << ' ' << y << endl;
        cin >> d3;
    }
    else d3 = -1;

    if (!d3) {
        cout << "! " << x << ' ' << y << endl;
    }
    else {
        cout << "? " << n << ' ' << 1 << endl;

        cin >> d2;

        y = ((d1 + d2) - (n - 1)) / 2 + 1;
        x = d1 - y + 2;

        cout << "! " << x << ' ' << y << endl;
    }
}
     
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}   