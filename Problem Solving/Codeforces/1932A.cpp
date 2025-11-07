#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int ptr = 0; int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '@'){
            cnt++;
        }else if( i < n - 1 && s[i] == '*' && s[i + 1] == '*'){
            break;
        }
    }
    cout << cnt << endl;
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
