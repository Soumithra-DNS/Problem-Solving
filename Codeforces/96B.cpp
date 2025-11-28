#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int a;
    cin >> a;
    string x = to_string(a);
    int n = x.size();

    if (n & 1) {
        for (int i = 0; i < (n + 1) / 2; i++) cout << '4';
        for (int i = 0; i < (n + 1) / 2; i++) cout << '7';
        cout << '\n';
        return;
    }

    int h = n / 2;
    string s = string(h, '4') + string(h, '7');

    string res = "";
    do {
        if (stoll(s) >= a) {
            res = s;
            break;
        }
    } while (next_permutation(s.begin(), s.end()));

    if (res.empty()) {
        for (int i = 0; i < h + 1; i++) cout << '4';
        for (int i = 0; i < h + 1; i++) cout << '7';
    } else {
        cout << res;
    }
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
