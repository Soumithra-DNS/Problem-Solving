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
    vector<int> v(n + 1);
    vector<int> first(n + 1, 0);
    vector<int> second(n + 1, 0);
    int longDis = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (i > 1)
        {
            if (v[i] - v[i - 1] < longDis)
            {
                first[i] = first[i - 1] + 1;
            }
            else
            {
                first[i] = first[i - 1] + (v[i] - v[i - 1]);
            }
            longDis = v[i] - v[i - 1];
        }
    }
    longDis = INT_MAX;
    for (int i = n; i > 0; i--)
    {
        if (i < n)
        {
            if (v[i + 1] - v[i] < longDis)
            {
                second[i] = second[i + 1] + 1;
            }
            else
            {
                second[i] = second[i + 1] + v[i + 1] - v[i];
            }
            longDis = v[i + 1] - v[i];
        }
    }

    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        if (l < r)
        {

            cout << first[r] - first[l] << endl;
        }
        else
        {
            cout << second[r] - second[l] << endl;
        }
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
        solve();
    }
    return 0;
}
