#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c; cin >> a >> b >> c;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);

    for(int i = 0; i < 5; i++){
        int x = pq.top();
        pq.pop();
        pq.push(x + 1);
    }
    int ans = 1;
    while(!pq.empty()){
        ans *= pq.top();
        pq.pop();
    }

    cout << ans << "\n";

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
