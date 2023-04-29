#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
const int MOD = 1e9 + 7;

void solve()
{
    int n;
	cin >> n;
	char arr[n][5];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 5; j++){
			cin >> arr[i][j];
		}
	}
	for(int i = 0; i < 5; i++){
		for(int j = i + 1; j < 5; j++){
			int cnt1 = 0, cnt2 = 0, cnt3 = 0;
			for(int l = 0; l < n; l++){
				if(arr[l][i] == '1'){
					cnt1++;
				}
				if(arr[l][j] == '1'){
					cnt2++;
				}
				if(arr[l][j] == '1' && arr[l][i] == '1'){
					cnt3++;
				}
			}
			cnt1 -= cnt3, cnt2 -= cnt3;
			if(cnt1 <= n / 2 && cnt2 <= n / 2 && cnt1 + cnt2 + cnt3 == n){
				cout << "YES" << '\n';
				return;
			}
		}
	}
	cout << "NO" << '\n';
        
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}