#include <bits/stdc++.h>
using namespace std;

int ask(int l, int r) {
	cout << "? " << l << " " << r << endl;
	int a;  cin >> a;
	return a;
}
 
int main()
{
	int n; cin >> n;
	int x = ask(1, n);
	if (x == 1 || ask(1, x) != x) {
		int l = x;
		int r = n ;
		while (r - l > 1) {
			int mid = (l + r) / 2;
			if (ask(x, mid) == x) {
				r = mid;
			}
			else {
				l = mid;
			}
		}
		cout << "! " << r  << endl;
	}
	else {
		int l = 1;
		int r = x;
		while (r - l > 1) {
			int mid = (l + r) / 2;
			if (ask(mid, x) == x) {
				l = mid;
			}
			else {
				r = mid;
			}
		}
		cout << "! " << l  << endl;
	}
 
}