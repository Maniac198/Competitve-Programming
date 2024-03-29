#include <bits/stdc++.h>
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

int f(int n){
	return n==0?0:f(n/10)+(n%10);
}
 
void slv(){
	int n;
	cin>>n;
	if(n&1){
        if(n%10 == 9){
            int p=n/2,q=n/2+1;
            while(abs(f(p)-f(q))>1)
            {
                p+=5;
                q-=5;
            }
            cout<<p<<" "<<q<<'\n';
        }
        else{
            cout << (n-1)/2 << ' ' << (n+1)/2 << endl; 
        }
    }
    else{ 
        cout << n/2 << ' ' << n/2 << endl;
    }
}
     
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--){
        slv();
    }
}