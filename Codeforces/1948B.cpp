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

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            if (arr[i - 1] > 9)
            {
                int x = arr[i - 1];
                int z = x % 10;
                int y = x / 10;
                if ((i != 1 && arr[i - 2] > y) || y > z || z > arr[i])
                {
                    cout << "NO"
                         << "\n";
                    return;
                }

                arr[i - 1] = z;
            }
            else
            {
                cout << "NO"
                     << "\n";
                return;
            }
        }
        else if (arr[i - 1] > 10)
        {
            int x = arr[i - 1];
            int z = x % 10;
            int y = x / 10;
            if (!((i != 1 && arr[i - 2] > y) || y > z || z > arr[i]))
            {
                arr[i - 1] = z;
            }
        }
    }
    cout << "YES"
         << "\n";
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
