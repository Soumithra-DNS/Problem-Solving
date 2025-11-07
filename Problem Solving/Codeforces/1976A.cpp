#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    bool check = false;
    for(int i = 0; i < n - 1; i++){
        if(s[i] > '9'){
            check = true;
        }
        if(s[i] <= '9' || s[i + 1] <= '9'){
            if(check){
                cout << "NO" << "\n";
                return;
            }
        }
        if(s[i] <= '9' && s[i + 1] <= '9'){
            if(check){
                cout << "NO" << "\n";
                return;
            }
            if(s[i] > s[i + 1]){
                cout << "NO" << "\n";
                return;
            }
        }else if(s[i] <= 'z' && s[i + 1] <= 'z' && s[i] > '9' && s[i + 1] > '9'){
            if(s[i] > s[i + 1]){
                cout << "NO" << "\n";
                return;
            }
            //check = true;
        }
    }
    cout << "YES" << "\n";
    return;
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
