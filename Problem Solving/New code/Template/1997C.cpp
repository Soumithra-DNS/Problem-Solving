#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {

        int n;
        string str;
        cin >> n >> str;

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '_')
            {
                if (i > 0 && str[i - 1] == '(')
                {
                    str[i] = ')';
                    ans++;
                }
                else
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        if (str[j] == ')')
                        {
                            ans += (j - i);
                            str[i] = '(';
                            break;
                        }
                    }
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
