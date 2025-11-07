#include <bits/stdc++.h>
using namespace std;
#define int long long

int helper(int node, const vector<int>& arr, const vector<vector<int>>& adj)
{
    int ans = arr[node - 1];
    int mn = LLONG_MAX;
    
    if (adj[node].empty())
    {
        return ans; 
    }
    
    for (auto child : adj[node])
    {
        mn = min(mn, helper(child, arr, adj)); 
    }

    if (node == 1)
    {
        ans += mn; 
    }
    else if (ans > mn)
    {
        ans = mn;
    }
    else
    {
        ans = (ans + mn) / 2; 
    }
    
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    vector<vector<int>> adj(n + 1); 
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        adj[x].push_back(i);
    }
    
    cout << helper(1, arr, adj) << "\n"; 
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
