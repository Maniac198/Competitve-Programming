#include <bits/stdc++.h>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      int long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

int digitSum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

vector<long long> precomputeDigitSums(int n) {
    vector<long long> digitSums(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        digitSums[i] = digitSum(i);
    }
    for (int i = 1; i <= n; ++i) {
        digitSums[i] += digitSums[i - 1];
    }

    return digitSums;
}

void solve(const vector<long long>& prefixSum, int n) {
    cout << prefixSum[n] << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;

    const int MAX_N = 200000;
    vector<long long> prefixSum = precomputeDigitSums(MAX_N);

    while(t--){
        int n;
        cin >> n;
        solve(prefixSum, n);
    }

    return 0;
}