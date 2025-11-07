#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAXC = 1e5;

void solve()
{
    int n;
    cin >> n;
    int posX = MAXC, negX = -MAXC, posY = MAXC, negY = -MAXC;
    while (n--)
    {
        int x, y, f1, f2, f3, f4;
        cin >> x >> y >> f1 >> f2 >> f3 >> f4;
        if (!f1)
            negX = max(negX, x);
        if (!f2)
            posY = min(posY, y);
        if (!f3)
            posX = min(posX, x);
        if (!f4)
            negY = max(negY, y);
    }

    if (negX <= posX && negY <= posY)
    {
        cout << "1 " << negX << " " << negY << "\n";
    }
    else
    {
        cout << "0" << "\n";
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
