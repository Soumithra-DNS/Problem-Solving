#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int cnt[27] = {0};
    string s; cin >> s;
    int n = s.size(); 
    for(int i = 0; i < n - 1; i++){
        if(s[i] == s[i + 1]){
            cout << s[i] << s[i + 1] << "\n";
            return;
        }
    }
    for(int i = 0; i < n - 2; i++){
        if(s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]){
            cout << s[i] << s[i + 1] << s[i + 2] << "\n";
            return;
        }
    }
    cout << -1 << "\n";
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
