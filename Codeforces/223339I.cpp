#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void cal(int i, string s)
{
    if (i == s.size())
    {
        return;
    }
    if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
    {
        cnt++;
    }
    cal(i + 1, s);
}
void solve()
{
    string s;
    getline(cin, s);
    cal(0, s);
    cout << cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}
