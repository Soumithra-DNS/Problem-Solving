#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for(int i = 0; i < n; i++){
        if(arr[i] <= 2 * arr[n] && arr[i] > arr[n]){
            swap(arr[i], arr[n]);
        }
    }

    // for (int i = n - 1; i >= 0; i--)
    // {
    //     if (arr[n] * 2 >= arr[i])
    //     {
    //         swap(arr[n], arr[i]);
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             if (arr[j] <= arr[n] * 2)
    //             {
    //                 swap(arr[n], arr[j]);
    //             }
    //         }
    //         break;
    //     }
    // }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum << "\n";
}

int32_t main()
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
