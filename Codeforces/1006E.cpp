#include <bits/stdc++.h>
using namespace std;
const int MAX = 2000010;
vector<set<int>> gr(MAX);
vector<vector<int>> result(MAX);
vector<int> ans;
int cnt = 0;
map<int, pair<int, int>> mp;

void dfs(int root)
{
    ans.push_back(root);
    mp[root].first = cnt;
    cnt++;
    for (auto child : gr[root])
    {
        dfs(child);
    }
    mp[root].second = cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q, x;
    cin >> n >> q;
    for (int i = 2; i <= n; i++)
    {
        cin >> x;
        gr[x].insert(i);
    }
    dfs(1);

    for (int i = 0; i < q; i++)
    {
        int e, f;
        cin >> e >> f;
        if (mp[e].second - mp[e].first < f)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << ans[mp[e].first + f - 1] << "\n";
        }
    }

    return 0;
}
