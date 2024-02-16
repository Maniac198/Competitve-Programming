#include <bits/stdc++.h>
using namespace std;

int flag = 1;
queue<int> a; 
queue<int> b; 

void push(int x) {
    
}

void solve(){
    push(1);
    push(2);
    push(3);

    cout<<a.size()<<" "<<b.size()<<endl;

    while(a.empty()){
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl;
    while(b.empty()){
        cout<<b.front()<<" ";
        b.pop();
    }
    cout<<endl;
}
     
signed main(){
    solve();
}