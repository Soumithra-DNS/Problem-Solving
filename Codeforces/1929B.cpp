#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    int ans;
    int x = n + (n - 2);
    if(k  < x * 2){
        ans = k / 2;
        if( k % 2){
            ans++;
        }
    }else{
        ans = x;
        ans+=( k - ( x * 2));
    }
    cout << ans << endl;

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
