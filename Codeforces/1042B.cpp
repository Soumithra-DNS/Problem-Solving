#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c, ab, bc, ac, abc;
    a = b = c = ab = bc = ac = abc = 1e7;
    int n;
    cin >> n;
    while (n--)
    {
        int cost;
        string s;
        cin >> cost >> s;
        if (s == "A")
        {
            a = min(a, cost);
        }
        else if (s == "B")
        {
            b = min(b, cost);
        }
        else if (s == "C")
        {
            c = min(c, cost);
        }
        else if (s == "AB" || s == "BA")
        {
            ab = min(ab, cost);
        }
        else if (s == "BC" || s == "CB")
        {
            bc = min(bc, cost);
        }
        else if (s == "AC" || s == "CA")
        {
            ac = min(ac, cost);
        }
        else
        {
            abc = min(abc, cost);
        }
    }
    int ans = abc;
    ans = min(ans, a + bc);
    ans = min(ans, b + ac);
    ans = min(ans, c + ab);
    ans = min(ans, ab + bc);
    ans = min(ans, ab + ac);
    ans = min(ans, ac + bc);
    ans = min(ans, a + b + c);

    if(ans == 1e7){
        cout << "-1" << "\n";
        return;
    }

    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
