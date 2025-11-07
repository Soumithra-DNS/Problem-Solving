#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b; cin >> n >> a >> b;
    if(2 * a <= b){
        cout << n * a << "\n";
    }else{
        if(n % 2){
            cout << (n / 2) * b + a << "\n";
        }else{
            cout << (n / 2) * b << "\n";
        }
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
