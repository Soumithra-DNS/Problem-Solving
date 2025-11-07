#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    string ans;
    ans.push_back(s[0]);
    bool check = true;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1] && check){
            check = false;
            if(s[i] != 'z'){
                ans.push_back(s[i] + 1);
            }else{
                ans.push_back('a');
            }
        }
        ans.push_back(s[i]);
    }
    cout << ans <<  "\n";
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
