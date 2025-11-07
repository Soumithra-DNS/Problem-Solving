#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, x;
    cin >> a >> b >> x;
    string s = "";
    bool ze = a <= b;

    if (ze)
    {
        s += "1";
        b--;
    }
    else
    {
        s += "0";
        a--;
    }

    while (true)
    {
        if (x > 1)
        {
            x--;
            ze = !ze;
            if (ze)
            {
                s += "1";
                b--;
            }
            else
            {
                s += "0";
                a--;
            }
        }
        else
        {
            if (ze)
            {
                for (int i = 0; i < b; i++)
                    s += "1";
                for (int i = 0; i < a; i++)
                    s += "0";
            }
            else
            {
                for (int i = 0; i < a; i++)
                    s += "0";
                for (int i = 0; i < b; i++)
                    s += "1";
            }
            break;
        }
    }

    cout << s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
