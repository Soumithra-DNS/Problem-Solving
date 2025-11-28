#include <bits/stdc++.h>
using namespace std;
#define int long long
int ask(int l, int r){
    cout << "? " <<l << " " << r << "\n";
    cout << "\n";
    cout.flush();
    int sum; cin >> sum;
    return sum;
}

void solve()
{
    int n;
    cin >> n;
    int ab = ask(1, 2);
    int bc = ask(2, 3);
    int ac = ask(1, 3);
    vector<int> ans(n);
    ans[1] = (ab + bc - ac) / 2;
    ans[0] = ab - ans[1];
    ans[2] = bc - ans[1];
    for(int i = 3; i < n; i++){
        int val = ask(1, i + 1);
        ans[i] = val - ans[0];
    }
    cout << "! " ;
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}
