#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int sumA = 0, sumB = 0, sum = 0;
    vector<int> a(n), b(n), vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sumA += a[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        sumB += b[i];
        if (a[i] <= b[i])
        {
            sum += a[i];
            vis[i] = 1;
        }
        else
        {
            cnt++;
        }
    }

    if(cnt == 0){
        cout << sumA << "\n";
        return;
    }

    if(cnt == n){
        cout << sumB << "\n";
        return;
    }


    for (int i = 0; i < n; i++)
    {
        
    }
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
