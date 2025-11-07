#include <bits/stdc++.h>
using namespace std;
#define int long long

int sum(int n){
    return (n *(n + 1))/2;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    n -= 1;
    int s = sum(k - 1);
    if(n > s){
        cout << -1 << "\n";
        return;
    }
    int l = 0, h = k - 1, mid;
    while(l <= h){
        mid = l + (h - l) / 2;
        if(s - sum(mid) >= n){
            l = mid + 1;
        }else{
            h = mid - 1;
        }
    }
    cout << l << " " << h << "\n";
    cout << k - 1 - h << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
