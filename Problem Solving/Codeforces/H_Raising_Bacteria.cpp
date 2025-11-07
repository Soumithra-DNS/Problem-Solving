#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int cnt = 1;

    int i = 1;
    while (i <= n)
    {
        i = i << 1;
    }

    if (i != n)
    {
        cnt += (n - (i >> 1));
    }

    cout << cnt << "\n";

    return 0;
}
