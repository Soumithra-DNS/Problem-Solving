#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int lim;
    if (n == 1)
    {
        lim = 0;
    }
    else
    {
        n % 2 == 0 ? lim = pow(n / 2, 2) : lim = (pow(n / 2, 2) + n / 2);
        lim *= 2;
    }
    if (k > lim || k % 2 == 1)
    {
        cout << "No" << "\n";
        return;
    }
    cout << "Yes" << "\n";

    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ans[i] = i;
    }

    int i = 1;
    while (k > 0 && i <= n / 2)
    {
        if (k >= 2 * (n + 1 - 2 * i))
        {
            swap(ans[i], ans[n + 1 - i]);
            k -= (2 * (n + 1 - 2 * i));
        }
        else
        {
            break;
        }
        i++;
    }
    while (k)
    {
        swap(ans[i], ans[i + 1]);
        k -= 2;
        i++;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
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

/*
    int p = 1;
    lim = 0;
    while(k >= lim){
        p++;
        p % 2 == 0 ? lim = pow(p / 2, 2) : lim = (pow(p / 2, 2) + p / 2);
        lim *= 2;
        //cout << lim << "\n";
    }
    p--;
    p % 2 == 0 ? lim = pow(p / 2, 2) : lim = (pow(p / 2, 2) + p / 2);
    lim *= 2;
    p--;;

    vector<int>ans(n + 2);
    int val = n;
    for(int i = n - p; i <= n; i++){
        ans[i] = val--;
    }
    p = k - lim;
    p /= 2;
    int l = val;
    for(int i = l - p; i <= l; i++ ){
        ans[i] = val--;
    }
    while(val >= 1){
        ans[val] = val--;
    }
*/
