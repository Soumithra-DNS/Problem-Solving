#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e12 + 5;
const ll sq = sqrt(N);
vector<bool>status(sq + 5, 0);

void siv()
{
    status[1] = 1;

    for (int i = 4; i <= sq; i += 2)
    {
        status[i] = 1;
    }
    int n = sqrt(sq);

    for (int i = 3; i < n; i += 2)
    {
        if (!status[i])
        {
            for (int j = i * i; j < sq; j += i)
            {
                status[j] = 1;
            }
        }
    }
}
bool cal(ll n)
{
    ll cnt = 0;
    ll Z = sqrt(n);
    if (!status[Z] && n == Z * Z)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll n;
    cin >> n;
    if (cal(n))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    siv();
    while (t--)
    {
        solve();
    }
    return 0;
}
