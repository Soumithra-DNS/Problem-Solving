#include <bits/stdc++.h>
using namespace std;
void print(vector<int> arr, int n){
    if(n < 0){
        return;
    }
    if(n % 2 == 0){
        cout << arr[n] << " ";
    }

    print(arr, --n);
}
void solve()
{
    int n; cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    print(arr, n - 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    //}
    return 0;
}
