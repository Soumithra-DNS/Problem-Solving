#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin >> s;
    int cnt = 0;
    int zeroOne = 0;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] != s[i + 1]){
            if(s[i] == '0' && s[i + 1] == '1' & !zeroOne){
                zeroOne++;
            }else{
                cnt++;
            }
        }
    }
    cnt++;
    cout << cnt << "\n";
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
