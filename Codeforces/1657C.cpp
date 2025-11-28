#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int l = 0, cnt = 0, ope = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[l] == str[i] && l != i)
        {
            l = i + 1;
            cnt = 0;
            ope++;
            continue;
        }
        if (str[i] == '(' && cnt >= 0)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
        if (cnt == 0 && l != i)
        {
            l = i + 1;
            ope++;
        }
    }
    cout << ope << " " << n - l << "\n";
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
