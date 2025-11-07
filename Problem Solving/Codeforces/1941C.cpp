#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    if(n < 3){
        cout << 0 << endl;
        return;
    }

    int cnt = 0;
    for(int i = 0; i < n - 2; i++){
        if((s[i] == 'm' && s[i +1] == 'a' && s[i + 2] == 'p') || (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')){
            cnt++;
            s[i] = '.';
            s[i +1] = '.';
            s[i + 2] = '.';

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
