#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n; cin >>n; 
    map<int,int> mp; 

    for (int i = 0; i < n; i++)
    {
        int temp; cin >>temp;
        mp[temp]++;
    }

    if (mp.size() == 1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        vector<int> ans;
        cout<<"YES"<<endl;
        for (auto it = mp.rbegin(); it!=mp.rend(); it++ )
        {
           cout<<it->first<<" ";
           it->second --;
        //    cout<<" "<<it->second<<" test"<<endl;
           if(it->second >= 1)
           {
                while(it->second--)
                {
                    ans.push_back(it->first);
                }
           }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";   
        }
        
        cout<<endl;
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