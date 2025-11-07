#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<bool> is_prime(n + 2, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n + 1; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n + 1; j += i)
                is_prime[j] = false;
        }
    }

    if (n < 3)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << "\n";
    }

    for (int i = 2; i < n + 2; i++)
    {
        if (is_prime[i])
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 2 << " ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
