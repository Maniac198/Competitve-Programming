#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int a, b, c, d;
      cin >> a >> b >> c >> d;
      int cntEven = 0;
      if(a%2 == 0){
         cntEven++;
      }
      if(b%2 == 0){
         cntEven++;
      }
      if(c%2 == 0){
         cntEven++;
      }
      if(d%2 == 0){
         cntEven++;
      }
      if(a == 0 or b == 0 or c == 0){
         if(cntEven >= 3){
            cout << "Yes" << endl;
         }
         else{
            cout << "No" << endl;
         }  
      }
      else{
         if(cntEven != 2){
            cout << "Yes" << endl;
         }
         else{
            cout << "No" << endl;
         }
      }
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