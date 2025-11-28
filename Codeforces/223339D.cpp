#include <bits/stdc++.h>
using namespace std;
void print(int i, string s){
    if(i == s.size()){
        return;
    }
    cout << s[i] << " ";
    print(++i, s);
}
void solve()
{
    string s;
    cin >> s;
    print(0, s);
    cout << "\n";
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
