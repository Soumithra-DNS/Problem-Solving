#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int vis[n + 1] = {};
    int arr[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        vis[arr[i]]++;
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(vis[i]){
            cnt += (vis[i] - 1);
        }else{
            cnt--;
            if(cnt < 0){
            cout << "NO" << "\n";
            return;
        }
        }
        //cnt += vis[i];
        // if(vis[i] == 0){
        //     cnt--;
        // }else{
        //     cnt += (vis[i] - 1);
        // }
        // if(cnt <= 0){
        //     cout << "NO" << "\n";
        //     return;
        // }

    }
    cout << "YES" << "\n";
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
