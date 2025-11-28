#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int ans = n;


    vector<long long> v(n);
    vector<int> vis(1e5 + 7);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());


    int r = n - 1;
    if (n == 1)
    {
        cout << 1 << "\n";
        return 0;
    }
    int l = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if(vis[i] == 1){
            continue;
        }

        while (r >= 0 && vis[r]){
            r--;
        }
        if (v[r] / v[i] >= 2 )
        {
            // if(l == -1){
            //     l = i - 1;
            // }
            l = i - 1;
            while(l >= 0 && v[i] / v[l] < 2){
                l--;
            }
            if(l != -1 && v[i] / v[l] >= 2){
                vis[l] = 1;
                l--;
            }else{
                r--;
                vis[i] = 1;
            }
            ans--;
        }
    }

    cout << ans << "\n";

    return 0;
}