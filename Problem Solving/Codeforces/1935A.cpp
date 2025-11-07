#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m;
    cin >> m;
    string s;
    cin >> s;
    int n = s.size();
    int i = 0;
    string t = s;
    reverse(s.begin(),s.end());
    if(s < t){
        cout << ( s + t) << endl;
    }else{
        cout << t << endl;
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
