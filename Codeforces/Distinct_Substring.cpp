#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k, ans; cin >> n >> k;
    ans = (k * (k + 1) / 2) + k - 1;
    if(ans <= n){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }

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
