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
    vector < pair<int, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].second;
    }
    sort(p.begin(), p.end());

    for (int i = 0; i < n; i++)
    {
        cout << p[i].first << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i].second << " ";
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
