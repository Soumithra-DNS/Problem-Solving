#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPrime(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "1" << "\n";
        return;
    }
    if (n % 2 == 0)
    {
        cout << "2" << "\n";
        return;
    }
    if (n & 1 && isPrime(n - 2))
    {
        cout << 2 << "\n";
        return;
    }
    else
    {
        cout << 3 << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}
