#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] > 60 && s[i] < 94){
            cout << i + 1;
            return;
        }
    }
}

int main()
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
