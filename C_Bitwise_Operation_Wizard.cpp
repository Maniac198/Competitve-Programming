#include <bits/stdc++.h>
using namespace std;

string query(int a, int b, int c, int d){
    printf("? %d %d %d %d",a,b,c,d);
    cout<<endl;
    string s; cin>>s; 
    return s; 
}

void solve(){
    int n; cin>>n; 

    int z = 0; 
    for(int i = 1; i<n; i++){
        string ans = query(z,z,i,i);
        if(ans == "<"){
            z = i; 
        }
    }

    int mx = 0;
    for(int i = 0; i<n; i++){
        string ans = query(z,mx,z,i);
        if(ans == "<"){
            mx = i;
        }
        else if(ans == "="){
            string res = query(mx,mx,i,i);
            if(res == ">"){
                mx = i;
            }
        }
    }
    cout<<"! "<<mx<<" "<<z<<endl;
}
     
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}