#include <bits/stdc++.h>
using namespace std;
#define int long long



void solve()
{
    string s; cin >> s;
    bool check = true;
    int i;
    for(i = 0; i < s.size() - 1; i++){
        if(s[i] == '0' && check){
            check = false;
            continue;
        }
        cout << s[i];
    }
    if(!check){
        cout << s[s.size() - 1];
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
