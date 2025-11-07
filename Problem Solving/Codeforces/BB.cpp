#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int l, r; cin >> l >> r;
    int range = r - l + 1;
    int L = 1, R = 1e9 + 5;
    while(L <= R){
        int mid = (L + R) / 2;
        int value = (mid * (mid + 1))/2;
        if(value < range){
            L = mid + 1;
        }else{
            R = mid - 1;
        }

    }

    cout << L << "\n";

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
