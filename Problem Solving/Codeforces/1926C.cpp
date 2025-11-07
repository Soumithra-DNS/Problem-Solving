#include <bits/stdc++.h>
using namespace std;
vector<long long> v(2e5 + 5);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long sum = 0, x;
    for (int i = 1; i <= 2e5 + 1; i++)
    {
        x = i;
        while (x)
        {
            sum += (x % 10);
            x /= 10;
        }
        v[i] = sum;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << v[n] << "\n";
    }
    return 0;
}
