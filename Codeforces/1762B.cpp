#include <bits/stdc++.h>
using namespace std;
#define int long long
int loga_base_b(int a, int b){
    return log(a) / log(b);
}

void solve()
{
    int n; cin >> n;
    vector<int>arr;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        arr.push_back(x);
    }
    cout << n << "\n";
    for(int i = 0; i < n; i++){
        int x = arr[i];
        int y = loga_base_b(arr[i], 2);
        y = pow(2, y);
        if(x > y){
            y *= 2;
        }
        cout << i + 1 << " " << y - x << "\n";
    }

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
