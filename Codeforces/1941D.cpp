#include <bits/stdc++.h>
using namespace std;

vector<pair<int, char>> step;
vector<int> ans;
set<int> st;
int n, m, X;

void dfs(int i, int x)
{
    if (i == step.size())
    {
        st.insert(x);
        return;
    }
    if (step[i].second == '0')
    {
        x = x + step[i].first;
        if (x > n)
        {
            x = x - n;
        }
        dfs(i + 1, x);
    }
    else if (step[i].second == '1')
    {
        x = x - step[i].first;
        if (x < 1)
        {
            x = x + n;
        }
        dfs(i + 1, x);
    }
    else if (step[i].second == '?')
    {

        int x1 = x;
        x1 = x1 + step[i].first;
        if (x1 > n)
        {
            x1 = x1 - n;
        }
        dfs(i + 1, x1);

        x1 = x;
        x1 = x1 - step[i].first;
        if (x1 < 1)
        {
            x1 = x1 + n;
        }
        dfs(i + 1, x1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> m >> X;
        int u;
        char v;
        while (m--)
        {
            cin >> u >> v;
            step.push_back({u, v});
        }
        dfs(0, X);

        cout << st.size() << "\n";
        for (auto i : st)
        {
            cout << i << " ";
        }

        cout << "\n";
        st.clear();
        step.clear();
    }
    return 0;
}
