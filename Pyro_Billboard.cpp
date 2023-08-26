#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

int t, n;
int a[MAXN], cnt[31];

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            for (int j = 0; j < 31; j++) {
                cnt[j] += ((a[i] >> j) & 1);
            }
        }
        
        int ans = 0;
        for (int j = 30; j >= 0; j--) {
            if (cnt[j] % 2 == 0) {
                ans += min(cnt[j], n - cnt[j]);
            } else {
                ans += n - cnt[j];
                break;
            }
        }
        cout << ans << endl;
        memset(cnt, 0, sizeof(cnt));
    }
    return 0;
}