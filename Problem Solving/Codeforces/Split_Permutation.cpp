#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int l = 1, r = n;
    if(n % 2 == 1){
        cout << r-- << " ";
    }
    while(l < r){
        cout << l++ << " " << r-- << " ";
    }
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
