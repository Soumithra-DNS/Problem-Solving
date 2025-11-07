#include <bits/stdc++.h>
using namespace std;
void print(int i, int n)
{
    if (i > n)
    {
        return;
    }
    for (int j = 0; j < n - i; j++)
    {
        cout << " ";
    }
    for (int j = 0; j < 2 * i - 1; j++)
    {
        cout << "*";
    }
    cout << "\n";
    print(i + 1, n);
}
void solve()
{
    int n;
    cin >> n;
    print(1, n);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    //}
    return 0;
}
