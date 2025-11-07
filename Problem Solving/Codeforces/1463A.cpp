#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define f(i, s, n) for (int i = s; i < n; i++)

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    ll sumOfHealth = a + b + c;
    int Min = min(a, min(b, c));

    if(sumOfHealth % 9 != 0)
    {
        no;
    }
    else
    {
        ll x = sumOfHealth / 9;
        if(Min >= x)
            yes;
        else
            no;
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
