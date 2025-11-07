#include <bits/stdc++.h>
using namespace std;
#define int long long

int f(vector<int> &v, int n, int c) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (c < v[i]) {
            ans += (v[i] - c);
        }
    }
    return ans;
}

void solve() {
    int n, tar;
    cin >> n >> tar;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = -1;
    int l = 0, r = 2e6 + 5;
    while (l <= r) {
        int mid = (l + r) / 2;
        int temp = f(v, n, mid);
        if (temp >= tar) {
            ans = mid;  
            l = mid + 1; 
        } else {
            r = mid - 1; 
        }
    }

    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
