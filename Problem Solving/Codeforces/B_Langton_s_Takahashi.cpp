#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define f(i, s, n) for (int i = s; i < n; i++)
int x, y, dir = 270, n, m, t;
void newPos(int d, bool lock)
{
    if (lock)
    {
        dir += d;
    }
    else
    {
        dir -= d;
    }

    if (dir == 360)
    {
        dir = 0;
    }
    else if (dir == -90)
    {
        dir = 270;
    }
    
    if (dir == 0)
    {
        y--;
        if (y == -1)
        {
            y = m - 1;
        }
        // cout << y<<endl;
    }
    else if (dir == 90)
    {
        x++;
        if (x == n)
        {
            x = 0;
        }
    }
    else if (dir == 180)
    {
        y++;
        if (y == m)
        {
            y = 0;
        }
    }
    else if (dir == 270)
    {
        x--;
        if (x == -1)
        {
            x = n - 1;
        }
    }
}

void solve()
{
    cin >> m >> n >> t;
    x = 0, y = 1;
    vector<vector<char>> v(m, vector<char>(n, '.'));
    bool lock = true;
    while (t--)
    {
        newPos(90, lock);
        lock = true;

        if (v[y][x] == '.')
        {
            v[y][x] = '#';
        }
        else
        {
            lock = false;
            v[y][x] = '.';
        }
    }
    for (auto a : v)
    {
        for (auto b : a)
        {
            cout << b;
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

    return 0;
}
