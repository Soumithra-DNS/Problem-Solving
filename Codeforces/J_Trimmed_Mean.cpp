#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[5 * n];
    for (int i = 0; i < 5 * n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 5 * n);
    double sum = 0;
    for (int i = n; i < 5 * n - n; i++)
    {
        sum += arr[i];
    }

    double ans = sum / (3 * n);

    // cout << ans << "\n";
    printf("%.15lf", ans);
}

int main()
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
