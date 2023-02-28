#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
#define endl '\n';

void solve()
{
    int n; cin>>n;
    char s[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>s[i][j];
        }
    }

    char a = s[0][0];
    char b = s[0][1];
    if (a==b)
    {
        cout<<"NO";
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                
                if(i+j == n-1 && s[i][j]!=a){
    				printf("NO");
    				return ;
    			}
    			else if(i==j && s[i][j]!=a){
    				printf("NO");
    				return ;
    			}
    			else if(s[i][j]!=a && i!=j && i+j!=n-1){
    				printf("NO");
    				return ;
    			}
            }
        }
    }
    
    cout<<"YES";
}

void solve1()
{
    int n;
    scanf("%d",&n);
    char a[n][n];
    for(int i=0;i<n;i++){
    	scanf("%s",&a[i]);
    }
    char p=a[0][0],q=a[0][1];
    if(p == q) printf("NO");
    else{
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			if(i+j == n-1 && a[i][j]!=p){
    				printf("NO");
    				return;
    			}
    			else if(i==j && a[i][j]!=p){
    				printf("NO");
    				return;
    			}
    			else if(a[i][j]!=q && i!=j && i+j!=n-1){
    				printf("NO");
    				return;
    			}
    		}
    	}
    	printf("YES");
    }
}
		
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	solve1();
	return 0;
}