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

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test;
    cin >> test;
    while (test--)
    {
        int m, n;
        cin >> m >> n;
        for (int i = m; i <= n; i++)
        {
            if (isPrime(i))
            {
                cout << i << "\n";
            }
        }
        cout << "\n";
    }
    return 0;
}
