#include <bits/stdc++.h>
using namespace std;
#define int long long
void dfs(int node, vector<vector<int>> &adj, vector<int> &vis)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis);
        }
    }
}


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>>temp(m + 1);
    vector<vector<int>>adj(n + 1);
    vector<int>vis(n + 1, 0);
    int p = 0;
    for(int i = 1; i <= n; i++){
        int c; cin >> c;
        if(c == 0) p++;
        for(int j = 1; j <= c; j++){
            int len; cin >> len;
            temp[len].push_back(i);
        }
    }
    for(int i = 1; i <= m; i++){
        for(int j = 1; j < temp[i].size(); j++){
            adj[temp[i][j - 1]].push_back(temp[i][j]);
            adj[temp[i][j]].push_back(temp[i][j - 1]);
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            ans++;
            dfs(i, adj, vis);
        }
    }

    if(p == n){
        cout << p << "\n";
    }else
    cout << ans - 1 << "\n";


}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
