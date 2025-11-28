#include <bits/stdc++.h>
using namespace std;
#define int long long

template <typename T>
void show(const T &container)
{
    for (const auto &x : container)
    {
        cout << x << " ";
    }
    cout << "\n";
}
void solve()
{
    int n, m ,k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int c = 0;
    vector<int> v(n + 2, 0);
    for(int i = 1; i <= n; i++){
        if(s[i - 1] == '0'){
            v[i] = v[i - 1] + 1;
        }else{
            v[i] = v[i - 1];
        }
    }
    int ans = 0;
    for(int i = 1; i <= n - m  + 1; i++){
        int x = v[i + m - 1] - v[i - 1];
        if(x == m){
            ans++;
            i = (i + m - 1 + k - 1);
        }
    }
    cout << ans << "\n";

//show(v);
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
