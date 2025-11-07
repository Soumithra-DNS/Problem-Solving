#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << "NO"
            << "\n";
        return;
    }
    cout << "YES"<<"\n";
    char ch = 'A';
    for (int i = 0; i < n / 2; i++)
    {
        cout << ch << ch;
        ch++;
    }
    cout << "\n";
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
