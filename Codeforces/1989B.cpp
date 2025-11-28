#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    // int ans = a.size();
    // map<char, int>mp;
    // for(int i = 0; i < a.size(); i++){
    //     mp[a[i]]++;
    // }
    // for(int i = 0; i < b.size(); i++){
    //     if(mp[b[i]] == 0){
    //         ans++;
    //     }else{
    //         mp[b[i]]--;
    //     }
    // }
    // cout << ans << "\n";

    int ans = a.size() + b.size();

    for (int i = 0; i < b.size(); i++)
    {
        int cnt = i;
        for (int j = 0; j < a.size(); j++)
        {
            if (cnt < b.size() && a[j] == b[cnt])
            {
                cnt++;
            }
        }
        ans = min(ans, i + (int)b.size() - cnt);
    }

    cout << ans + a.size() << "\n";
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
