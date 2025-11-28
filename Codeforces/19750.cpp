#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int k = -1;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i != 0 &&k == -1 && arr[i] < arr[i - 1]){
            k = i;
        }
    }
    if(k == -1){
        cout << "Yes" << "\n";
        return;
    }

    for(int i = k; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            cout << "No" << "\n";
            return;
        }
    }

    if(arr[n -1] <= arr[0]){
        cout << "Yes" << "\n";
        return;
    }

    cout << "No" << "\n";
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
