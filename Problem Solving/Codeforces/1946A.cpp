#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1);
    int mid = (n + 1) / 2;
    int cnt = 1;
    for (int i = mid; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cnt++;
        }
        else
        {
            break;
        }
        
    }

    cout << cnt << "\n";
    cout << (-1000 % 1007 + 1007)  % 1007 << endl;
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
