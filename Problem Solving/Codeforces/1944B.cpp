#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> m1, m2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        m1[x]++;
    }
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        m2[x]++;
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
