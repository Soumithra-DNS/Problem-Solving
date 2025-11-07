#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int arr[2 * n];
    for(int i  = 0; i < 2 * n; i++){
        cin >> arr[i];

    }
    int sum = 0;
    sort(arr, arr + 2 * n);
    for(int i = 0; i < n * 2; i = i + 2){
        int x = min(arr[i], arr[i + 1]);
        //arr[i + 1] = x;
        sum += x;
    }
    cout << sum <<"\n";
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
