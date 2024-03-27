#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> &vis, vector<int> adj[],int src){
    vis[src] = 1;

    for(auto nd : adj[src]){
        if(vis[nd] == 0){
            dfs(vis,adj,nd);
        }
    }
}
     
int main(){
    int n,m; cin>>n>>m; 
    vector<int> vis(n,0);
    vector<int> adj[n];

    for(int i = 0; i<m; i++){
        int u,v; cin>>u>>v; 
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> nodes;
    for(int i = 0; i<n; i++){
        if(vis[i] == 0){
            nodes.push_back(i);
            dfs(vis,adj,i);
        }
    }

    cout<<nodes.size()-1<<endl;
    for(int i = 0; i<nodes.size()-1; i++){
        cout<<nodes[i]+1<<" "<<nodes[i+1]+1<<endl;
    }
}
