#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5;
vector<bool> is_prime(N + 1, true);
void sieve()
{
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i] && (long long)i * i <= N)
        {
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}
void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            int m = (s[i] - '0') * 10;
            m += (s[j] - '0');
            if (is_prime[m])
            {
                cout << m << "\n";
                return;
            }
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

int N = 
queue<int> q;
vector<bool> vis(N);
vector<int> d(N);

q.push(source);
vis[source] = true;
while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int u : adj[v]) {
        if (!vis[u]) {
            vis[u] = true;
            q.push(u);
            d[u] = d[v] + 1;
        }
    }
}