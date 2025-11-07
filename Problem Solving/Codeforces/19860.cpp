#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int arr[3]; cin >> arr[0] >> arr[1] >> arr[2];
    int mn = INT_MAX;
    for(int i = 0; i < 3; i++){
        int a = 0;
        a += abs(arr[i] - arr[0]);
        a += abs(arr[i] - arr[1]);
        a += abs(arr[i] - arr[2]);
        mn = min(mn, a);
    }
    cout << mn << "\n";

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
