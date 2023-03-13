#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';
void yes(){cout<<"YES"<<endl;}
void no(){cout<<"NO"<<endl;}

void solve()
{
    string s,t; cin>>t>>s;
    int stat=0,stat1=0;

    if(s.length()==1 and t.length()==1){
        if(s==t){ 
            cout<<"YES"<<endl;
            cout<<s<<endl;
            return;
        }
        cout<<"NO"<<endl;
        return;
    }
    else if (s[0]==t[0])
    {
        yes();
        cout<<s[0]<<"*"<<endl;
        return;
    }
    else if (s[s.length()-1] == t[t.length()-1])
    {
        yes();
        cout<<"*"<<s[s.length()-1]<<endl;
        return;
    }
    else
    {
        for(int i=0 ; i<t.length()-1; i++)
        {
            for(int j = 0; j < s.length()-1; j++){
                if(t[i] == s[j] && t[i+1] == s[j+1]){
                    yes();
                    cout<<"*"<<s[j]<<s[j+1]<<"*"<<endl;
                    return;
                }
            }
        }
}

    cout<<"NO"<<endl;
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