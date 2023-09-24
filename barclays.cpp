#include <bits/stdc++.h>
using namespace std;

signed main()
{
    vector<int> v = {1,2,2,2,2,3,3,3,4,5,5,5};
    // auto ip = unique(v.begin(),v.end());
    // v.resize(distance(v.begin(),ip));
    vector<int> res();
    unique_copy(v.begin(),v.end(),res.begin());
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
}