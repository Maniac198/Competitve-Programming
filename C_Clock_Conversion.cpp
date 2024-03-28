#include <bits/stdc++.h>
#include <sstream>
using namespace std;

#define      yes {cout<<"YES"<<endl;}
#define      no {cout<<"NO"<<endl;}
#define      ll long long 
#define      endl '\n';
#define      all(x) x.begin(),x.end()
#define      rep(i,b,e) for(__typeof(e) i=b-(b>e); i != (e)-(b>e);i+=1-2*(b>e))
int          lcm(int a,int b) { return a/__gcd(a,b)*b; }
int          nxt(){ int x; cin>>x; return x;}
const        int MOD = 1e9 + 7;

string convertTo12HourFormat(string time) {
    stringstream ss(time);
    int hour, minute;
    char colon;
    ss >> hour >> colon >> minute;

    string am_pm;
    if (hour == 0) {
        hour = 12;
        am_pm = "AM";
    }
    else if (hour < 12) {
        am_pm = "AM";
    } else {
        am_pm = "PM";
        if (hour > 12)
            hour -= 12;
    }

    return (hour < 10 ? "0" : "") + to_string(hour) + ":" + (minute < 10 ? "0" : "") + to_string(minute) + " " + am_pm;
}


void solve(){
    string s; cin >> s; 
    cout << convertTo12HourFormat(s) << endl;
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}