#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> x(k), y(k);
    for (int i = 0; i < k; i++)
    {
        cin >> x[i] >> y[i];
    }

    int ans = INT_MIN, X, Y;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int d = INT_MAX;
            for (int z = 0; z < k; z++)
            {
                d = min(d, abs(x[z] - i) + abs(y[z] - j));
            }

            if (d >= ans)
            {
                X = i;
                Y = j;
                ans = d;
            }
        }
    }

    cout << X << " " << Y << "\n";

    return 0;
}
