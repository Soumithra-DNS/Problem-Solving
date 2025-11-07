#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    if(n < m){
        cout << "No" << "\n";
        return;
    }
    if((n - m) % 2 == 0)
        cout << "Yes" << "\n";
    else{
        cout << "No" << "\n";
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
