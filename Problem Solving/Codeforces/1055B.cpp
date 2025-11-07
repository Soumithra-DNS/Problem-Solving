#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, l;
    cin >> n >> m >> l;
    vector<int> arr(n + 2), seg(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > l)
        {
            if (seg[i - 1] == 0 && seg[i + 1] == 0)
            {
                cnt++;
                seg[i] = 1;
            }
            else if (seg[i - 1] == 0 || seg[i + 1] == 0)
            {
                seg[i] = 1;
            }
        }
    }
    while (m--)
    {
        int type;
        cin >> type;
        if (type)
        {
            int ind, val;
            cin >> ind >> val;
            if(arr[ind] > l){
                arr[ind] += val;
                continue;
            }
            arr[ind] += val;
            // cout << arr[ind] << "\n";
            if (arr[ind] > l)
            {
                if (seg[ind - 1] == 0 && seg[ind + 1] == 0)
                {
                    cnt++;
                    seg[ind] = 1;
                }
                else if (seg[ind - 1] == 0 || seg[ind + 1] == 0)
                {
                    seg[ind] = 1;
                }
                else 
                {
                    cnt--;
                    seg[ind] = 1;
                }
            }
        }
        else
        {
            cout << cnt << "\n";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
