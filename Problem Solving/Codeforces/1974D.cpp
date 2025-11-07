#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    string s, ans;
    cin >> s;
    int x = 0, y = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'N'){
            y += 1;
        }
        if(s[i] == 'S'){
            y -= 1;
        }
        if(s[i] == 'E'){
            x += 1;
        }
        if(s[i] == 'W'){
            x -= 1;
        }
    }
    if(abs(x) % 2 == 1 || abs(y) % 2 == 1){
        cout << "NO"<< "\n";
        return;
    }
    if(n == 2 && x == 0 && y == 0){
        cout << "NO" << "\n";
        return;
    }

    //cout << x << " " << y << "\n";
    for(int i = 0; i < n; i++){
        //cout << x << " " << y << "\n";
        if(s[i] == 'N'){
            if(y > 0){
                y -= 2;
                cout << "R";
            }else{
                cout << "H";
            }
        }
        if(s[i] == 'S'){
            if(y <= 0){
                y += 2;
                cout << "R";
            }else{
                cout << "H";
            }
        }
        if(s[i] == 'E'){
            if(x >= 0){
                x -= 2;
                cout << "R";
            }else{
                cout << "H";
            }
        }
        if(s[i] == 'W'){
            if(x <= 0){
                x += 2;
                cout << "R";
            }else{
                cout << "H";
            }
        }
    }
    cout <<"\n";
}

int32_t main()
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
