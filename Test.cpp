#include <bits/stdc++.h>
using namespace std;
void f(int idx,int n,vector<int> &v,vector<int> &a){
    if(idx == n){
        if(a.size()==0){
            cout<<"{ }"<<endl;
            return;
        }
        for (auto it : a){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    a.push_back(v[idx]);
    f(idx+1,n,v,a);
    a.pop_back();
    f(idx+1,n,v,a);
}

int main ()
{
    vector<int> v = {1,2,4};
    vector<int> a; 
    f(0,v.size(),v,a);
}   