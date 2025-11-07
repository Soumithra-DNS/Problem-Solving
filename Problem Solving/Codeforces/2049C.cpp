#include <bits/stdc++.h>
using namespace std;
#define int long long

template <typename T>
void show(const T &container)
{
    for (const auto &x : container)
    {
        cout << x << " ";
    }
    cout << "\n";
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    if (x > y) swap(x, y); 

    int c = (y - x) % n;

    int d = (x + n - y) % n;

    c--;
    d--;
    vector<int>ans(n + 1);

    if(c % 2 == 0 && d % 2 == 0){
        ans[x] = 1;
        bool one = false;
        for(int i = x + 1; i != x; i++){
            ans[i] = one;
            one = !one;
            if(i == n){
                i = 0;
            }
        }
    }else{
        ans[x] = 2;
        bool one = false;
        for(int i = x + 1; i != x; i++){
            ans[i] = one;
            one = !one;
            if(i == n){
                i = 0;
            }
        }
    }



    for(int i = 1; i <= n ; i++){
        cout << ans[i] << " ";
    }

    cout << "\n";
    
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
