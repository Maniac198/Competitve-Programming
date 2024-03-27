#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

int fun(string num) {
    int n = num.size();
    map<pair<int,string>, int> dp;

    for (int ind = 0; ind < n; ++ind) {
        for (int target = 0; target < n; ++target) {
            if (ind == 0) {
                dp[{ind, num}] = target + stoi(num);
            } else {
                string s = num.substr(0, ind);
                int take = dp[{ind - 1, s}] + target;
                s.push_back(num[ind]);
                int notTake = dp[{ind - 1, s}];
                dp[{ind, num}] = (take + notTake) % MOD;
            }
        }
    }

    return dp[{n - 1, num}];
}

void solve(){
    string s;
    cin >> s;
    cout << fun(s) << endl;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}