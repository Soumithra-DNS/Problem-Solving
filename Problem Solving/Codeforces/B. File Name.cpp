#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0, m = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            m++;
            if (m >= 3)
            {
                c++;
            }
        }
        else
        {
            m = 0;
            continue;
        }

    }

    cout << c << endl;

    return 0;
}
