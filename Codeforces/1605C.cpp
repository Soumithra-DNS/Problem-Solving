#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int A = 0, B = 0, C = 0;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {

            A = 0, B = 0, C = 0;
            for (int j = i; j < min(n, i + 7); j++)
            {
                if (s[j] == 'a')
                {
                    A++;
                    if((j - i + 1) / 2 > A){
                        break;
                    }
                }
                else if (s[j] == 'b')
                {
                    B++;
                }
                else if (s[j] == 'c')
                {
                    C++;
                }
                
                if (A >= 2 && A > B && A > C)
                {
                    mn = min(mn, j - i + 1);
                    break;
                }
            }
        }
    }

    if (mn == INT_MAX)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << mn << "\n";
    }
}

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int A = 0, B = 0, C = 0;
//     int mn = INT_MAX;
//     int ptr = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == 'a' && s[i + 1] == 'a')
//         {
//             mn = 2;
//             break;
//         }
//         if (s[i] == 'a')
//         {
//             A++;
//             if (ptr == -1)
//             {
//                 ptr = i;
//             }
//         }
//         if (ptr == -1)
//         {
//             continue;
//         }
//         if (s[i] == 'b')
//         {
//             B++;
//         }
//         else if (s[i] == 'c')
//         {
//             C++;
//         }
//         // cout << A<<B<<C<<"\n";
//         while (A >= 2 && ptr < n)
//         {
//             if (A > B && A > C)
//                 mn = min(mn, i - ptr + 1);
//             if (s[ptr] == 'a')
//             {
//                 A--;
//             }
//             else if (s[ptr] == 'b')
//             {
//                 B--;
//             }
//             else
//             {
//                 C--;
//             }
//             ptr++;
//             if (s[ptr] == 'a' || ptr == n)
//             {
//                 if (A > B && A > C)
//                     mn = min(mn, i - ptr + 1);
//                 break;
//             }
//         }
//     }
//     // while (ptr != -1 && ptr < n)
//     //     {
//     //         mn = min(mn, n - ptr);
//     //         if (s[ptr] == 'a')
//     //         {
//     //             A--;
//     //         }
//     //         else if (s[ptr] == 'b')
//     //         {
//     //             B--;
//     //         }
//     //         else
//     //         {
//     //             C--;
//     //         }
//     //         ptr++;
//     //         // if (s[ptr] == 'a' || ptr == n)
//     //         // {
//     //         //     break;
//     //         // }
//     //     }

//     if (mn == INT_MAX)
//     {
//         cout << -1 << "\n";
//     }
//     else
//     {
//         cout << mn << "\n";
//     }
// }

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
