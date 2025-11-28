#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int mx = INT_MIN;
            if(j != 0){
                mx = max(mx, arr[i][j - 1]);
            }
            if(i != n - 1){
                mx = max(mx, arr[i + 1][j]);
                //cout << mx << "\n";
            }
            if(j != m - 1){
                mx = max(mx, arr[i][j + 1]);
                //cout << mx << "\n";
            }
            if(i != 0){
                mx = max(mx, arr[i - 1][j]);
            }
            if(mx < arr[i][j]){
                arr[i][j] = mx;
            }

        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    //cout << "\n";
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
