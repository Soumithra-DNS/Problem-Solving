#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    if(k >= n - 1){
        cout << 1 << "\n";
        return;
    }else{
        cout << n << "\n";
        return;
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
