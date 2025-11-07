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

void solve()
{
    int n;
    cin >> n;
    queue<int> q, ans;

    f(i, 0, n)
    {
        int x;
        cin >> x;
        q.push(x);
        while (q.front() < q.size())
        {
            q.pop();
        }
        ans.push(q.size());
    }

    while (!ans.empty())
    {
        cout << ans.front() << " ";
        ans.pop();
    }
    cout << endl;
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
