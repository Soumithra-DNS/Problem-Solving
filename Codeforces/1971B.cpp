#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin >> s;
    map<char, int>m;
    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
    }
    int c = 0;
    for(auto it : m){
        c++;
    }
    if(c > 1){
        cout << "YES" << "\n";
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] != s[i + 1]){
                swap(s[i], s[i + 1]);
            }
        }
        cout << s << "\n";
    }else{
        cout << "NO" << "\n";
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
