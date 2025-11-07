#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int>a(n + 1), b(n + 1);
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
    int k = (n + 1) / 2;
    int val = n - k + 1;
    for(int i = 1; i <=  k; i++){
        b[i] = val++;
    }
    val = 1;
    for(int i = k + 1; i <= n; i++){
        b[i] = val++;
    }
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    for(int i = 1; i <= n; i++){
        cout << b[i] << " ";
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
