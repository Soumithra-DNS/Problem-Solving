#include <bits/stdc++.h>
using namespace std;
vector<bool> prime(1e4 + 5, true);

void sieve()
{
    for (int i = 2; i * i < 1e4 + 5; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < 1e4 + 5; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();

    int n, q;
    cin >> n >> q;
    vector<int> v(n), vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> ans;
    int p = 2;
    bool lTor = true;
    while (q--)
    {
        while (!prime[p])
        {
            p++;
        }
        if (lTor)
        {
            for (int i = 0; i < n; i++)
            {
                if (!vis[i])
                {
                    if (v[i] % p == 0)
                    {
                        ans.push_back(v[i]);
                        vis[i] = 1;
                    }
                }
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (!vis[i])
                {
                    if (v[i] % p == 0)
                    {
                        ans.push_back(v[i]);
                        vis[i] = 1;
                    }
                }
            }
        }
        lTor = !lTor;

        p++;
    }
    lTor = !lTor;
    if (lTor)
    {
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                ans.push_back(v[i]);
                vis[i] = 1;
            }
        }
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (!vis[i])
            {

                ans.push_back(v[i]);
                vis[i] = 1;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
