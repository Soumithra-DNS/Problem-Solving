#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(auto& i : v){
        cin >> i;
    }

    long long int sum1 = 0, sum2 = 0, ans;
    int mx = INT_MIN;

    for(int i = 0; i < n; i += 2){
        if(v[i] > 0){
            sum1 += v[i];
        }else{
            mx = max(mx, v[i]);
        }
    }
    for(int i = 1; i < n; i += 2){
        if(v[i] > 0){
            sum2 += v[i];
        }else{
            mx = max(mx, v[i]);
        }
    }

    ans = max(sum1, sum2);
    if(ans == 0){
        ans = mx;
    }

    cout << ans << "\n";
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
