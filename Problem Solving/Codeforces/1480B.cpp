#include <bits/stdc++.h>
#define ll long long
#define pb push_back
const long long mod = 1e9 + 7;
using namespace std;

void solve()
{
    ll attack, health, n;
    cin >> attack >> health >> n;
    ll att[n], hea[n];
    ll maX = 0;
    for (int i = 0; i < n; i++){
        cin >> att[i];
        maX = max(maX, att[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> hea[i];
        ll count = hea[i] / attack;
        if (hea[i] % attack)
            count++;
        health -= (count * att[i]);
    }
    health += maX;

    if (health > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int_fast32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}