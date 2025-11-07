#include <bits/stdc++.h>
using namespace std;
//#define int long long

void solve()
{
    int l, r;
    cin >> l >> r;
    int cnt = 1;
    int ans = 0;
    while(cnt <= r){
        cnt *= 2;
        ans++;
    }
    cout << ans - 1 << "\n";
    // cin >> l >> r;
    //scanf("%d%d", &l, &r);
    //cout << (int)log2(r) << "\n";
    //printf("%d\n", __lg(r));
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
