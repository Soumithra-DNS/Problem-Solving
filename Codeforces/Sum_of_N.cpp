#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int k;
    cin >> k;
    int sum = k * 2;

    for (int i = 3; i <= k && k % 2 != 0; i++)
    {
        int val = k * i;
        if (val % 2 == 1)
        {
            int j;
            for(j = 3; j < i; j++)
                if(val % j == 0){
                    break;
                }
            //cout << sum << "\n";
            if(j == i)
                sum += val;

        }
    }
    cout << sum << "\n";
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


