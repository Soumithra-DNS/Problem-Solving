#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (int i = 2; i * i < n; i++)
    {
        int sum = 1;
        int k = i;
        while (sum < n)
        {
            sum += k;
            if (sum == n)
            {
                cout << "YES" << "\n";
                return;
            }
            k *= i;
        }
    }
    cout << "NO" << "\n";
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
