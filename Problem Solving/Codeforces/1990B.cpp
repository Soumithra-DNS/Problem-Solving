#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, x, y; cin >> n >> x >> y;
    vector<int>arr(n + 1);
    bool type = true;
    for(int i = y - 1; i > 0; i--){
        if(type){
            arr[i] = -1;
        }else{
            arr[i] = 1;
        }
        type = !type;
    }
    type = true;
    for(int i = y; i <= x; i++){
        arr[i] = 1;
    }
    for(int i = x + 1; i <= n; i++){
        if(type){
            arr[i] = -1;
        }else{
            arr[i] = 1;
        }
        type = !type;
    }
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
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
