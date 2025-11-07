#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s; cin >> s;
    int n = s.size();
    int cnt[n] = {};
    if(s[0] == 'Q'){
        cnt[0]++;
    }
    for(int i = 1; i < n; i++){
        if(s[i] == 'Q'){
            cnt[i] = cnt[i - 1] + 1;
        }else{
            cnt[i] = cnt[i - 1];
        }
    }
    int total = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            total += (cnt[i] * (cnt[n - 1] - cnt[i]));
        }
    }
    cout << total << "\n";

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
