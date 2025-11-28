#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int arr[13] = {};
    arr[c] = 1;
    arr[d] = 1;
    int i = a;
    int cnt = 0;
    while (i != b)
    {
        if (i == c || i == d)
        {
            cnt++;
        }
        i++;
        if (i == 13)
        {
            i = 1;
        }
    }
    if (cnt == 2 || cnt == 0)
    {
        cout << "NO" << "\n";
        return;
    }
    i = a;
    while (i != b)
    {
        if (i == c || i == d)
        {
            cnt++;
        }
        i--;
        if (i == 0)
        {
            i = 12;
        }
    }
    if (cnt == 2)
    {
        cout << "YES" << "\n";
        return;
    }

    cout << "NO" << "\n";
    return;
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
        solve();
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> grp;
// vector<bool> vis;
// int a, b, c, d;
// void g()
// {
//     cout << "1" << "\n";
//     for (int i = 2; i < 12; i++)
//     {
//         grp[i].push_back(i - 1);
//         grp[i].push_back(i + 1);
//     }
//     grp[1].push_back(2);
//     grp[1].push_back(12);
//     grp[12].push_back(11);
//     grp[12].push_back(1);
// }

// bool dfs(int root)
// {
//     if (root == b)
//     {
//         return false;
//     }
//     else if (root == c || root == d)
//     {
//         return true;
//     }

//     for (auto child : grp[root])
//     {
//         if (vis[child])
//         {
//             vis[child] = false;
//             dfs(child);
//         }
//     }
// }

// bool dfs1(int root)
// {
//     if (root == a)
//     {
//         return false;
//     }
//     else if (root == c || root == d)
//     {
//         return true;
//     }

//     for (auto child : grp[root])
//     {
//         if (vis[child])
//         {
//             vis[child] = false;
//             dfs1(child);
//         }
//     }
// }

// void solve()
// {
//     vis = vector<bool>(13, true);

//     cin >> a >> b >> c >> d;

//     bool check = dfs(a);
//     bool check1 = dfs1(b);

//     if (check && check1)
//     {
//         cout << "YES" << "\n";
//     }
//     else
//     {
//         cout << "NO" << "\n";
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     g();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
