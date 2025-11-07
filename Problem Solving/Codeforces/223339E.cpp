#include <bits/stdc++.h>
using namespace std;
string s = "";
void bin(int n){
    if(n == 0){
        return;
    }

    if(n % 2 == 1){
        s = "1" + s;
    }else{
        s = "0" + s;
    }

    bin(n / 2);
}
void solve()
{
    int n;
    cin >> n;
    s = "";
    bin(n);
    cout << s << "\n";
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
