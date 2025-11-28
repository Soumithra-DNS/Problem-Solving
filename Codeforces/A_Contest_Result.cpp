#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    int arr1[n + 1], arr2[m + 1];
    for(int i = 1; i <= n; i++){
        cin >> arr1[i];
    }
    long long int sum = 0;
    for(int i = 1; i <= m; i++){
        cin >> arr2[i];
        sum += arr1[arr2[i]];
        arr1[arr2[i]] = 0;

    }
    cout << sum << "\n";
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
