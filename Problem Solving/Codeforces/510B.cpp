#include <bits/stdc++.h>
using namespace std;
int n, m, u, v;
char puz[50][50];
//bool vis[50][50];
//vector<vector<bool>>vis(50, vector<bool>(50));
bool check = false;

void dfs(char ch, int i, int j, int cnt, vector<vector<bool>> vis){
    if(i == u && j == v && cnt >= 4){
        cout << u <<" "<< v<<"\n";
        check = true;
        return;
    }
    if(cnt != 0){
        vis[i][j] = true;
    }
    if(i - 1 >= 0 && !vis[i - 1][j] && puz[i - 1][j] == ch){
        dfs(ch, i - 1, j, cnt + 1, vis);
    }else if(j + 1 < m && !vis[i][j + 1] && puz[i][j + 1] == ch){
        dfs(ch, i, j + 1, cnt + 1,vis);
    }else if(i + 1 < n && !vis[i + 1][j] && puz[i + 1][j] == ch){
        dfs(ch, i + 1, j, cnt + 1,vis);
    }else if(j - 1 >= 0 && !vis[i][j - 1] && puz[i][j - 1] == ch){
        dfs(ch, i, j - 1, cnt + 1, vis);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    vector<vector<bool>>vis(n, vector<bool>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> puz[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
                for(int k = 0; k < n; k++){
                    vis[i].clear();
                }
                u = i;
                v = j;
                dfs(puz[i][j], i, j, 1, vis);
            
            if (check)
            {
                cout << "Yes" << "\n";
                return 0;
            }
        }
    }
    if (check)
    {
        cout << "Yes" << "\n";
        return 0;
    }
    else
    {
        cout << "No" << "\n";
    }

    return 0;
}
