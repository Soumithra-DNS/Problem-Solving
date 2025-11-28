#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x , y;
    cin >> n >> x >> y;
    if(2 * x >= y){
        cout << x * n << "\n";
    }else{
        cout << ((n/2) * y) + ((n % 2) * x) << "\n"; 
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
