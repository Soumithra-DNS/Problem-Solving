#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    vector<string> arr;
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    vector<vector<int>> vis(n + 1, vector<int>(m + 1, -1));
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '*')
            {
                int level = 1;
                int l = j - level;
                int r = j + level;
                int x = i - level;
                vector<pair<int,int>>p;
                while (l >= 0 && r < m && x >= 0)
                {
                    if (arr[x][l] == '*' && arr[x][r] == '*')
                    {
                        p.push_back({x, l});
                        p.push_back({x, r});
                        level++;
                        l = j - level;
                        r = j + level;
                        x = i - level;
                    }else{
                        break;
                    }
                }
                level--;
                if(level < k && vis[i][j] == -1){
                    cout << "NO" << "\n";
                    return;
                }
                if(level >= k){
                for(int i = 0; i < p.size(); i++){
                    int a = p[i].first;
                    int b = p[i].second;
                    vis[a][b] = 1;
                }
                }
                vis[i][j] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == '*' && vis[i][j] == -1){
                cout << "NO" << "\n";
                return;
            }
        }
    }
    cout << "YES" << "\n";
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
