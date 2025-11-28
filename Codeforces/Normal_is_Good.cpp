#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    int one = 0, two = 0, three = 0;
    for (int i = 0; i < n; i++)
    {
        one = 0, two = 0, three = 0;

        for (int j = i; j >= 0; j--)
        {
            if (arr[j] == 1)
                one++;
            else if (arr[j] == 2)
                two++;
            else
                three++;

            int m = i - j + 1;
            int sum = one + 2 * two + 3 * three;
            
            if (sum % m == 0)
            {
                int mean = sum / m;
                int median = (m + 1) / 2;
                int mid = 0;
                if (median <= one)
                    mid = 1;
                else if (median <= one + two)
                    mid = 2;
                else
                    mid = 3;

                if (mean == mid)
                {
                    ans++;
                }
            }
        }
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
