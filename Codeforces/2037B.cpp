#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    vector<int>arr(n + 2);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr[x]++;
    }
    int ans = n - 2;
    for(int i = 1; i <= n; i++){
        if(arr[i] != 0 && ans % i == 0){
            int y = ans / i;
            if(arr[y] != 0){
                if(i == y && arr[i] > 1){
                    cout << i << " " << y << "\n";
                    return;
                }else if(i != y){
                    cout << i << " " << y << "\n";
                    return;
                }
            }
        }
    }

    cout << 1 << " " << n << "\n";
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
