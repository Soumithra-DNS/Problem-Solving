#include <bits/stdc++.h>
using namespace std;

vector<bool> prime(2e6 + 5, true);

void sieve()
{
    for (int i = 2; i * i < 1e4 + 5; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < 1e4 + 5; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

int nextPrime(int j)
{
    while (!prime[j])
    {
        j++;
    }
    return j;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int one = 0, two = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    if(two){
        cout << 2 << " ";
        two--;
    }
    if(one){
        cout << 1 << " ";
        one--;
    }
    while(two){
        cout << 2 << " ";
        two--;
    }
    while(one){
        cout << 1 << " ";
        one--;
    }

    // int j = -1;
    // vector<int> ans;
    // int sum = 0;
    // while (true)
    // {
    //     j = nextPrime(j + 1);
    //     // cout << j << "\n";
    //     while (sum < j)
    //     {
    //         if (two != 0 && j - sum >= 2)
    //         {
    //             ans.push_back(2);
    //             sum += 2;
    //             two--;
    //         }
    //         else if (one != 0 && j - sum >= 1)
    //         {
    //             ans.push_back(1);
    //             sum += 1;
    //             one--;
    //         }
    //         else
    //         {
    //             if (two != 0)
    //             {
    //                 ans.push_back(2);
    //                 sum += 2;
    //                 two--;
    //             }
    //             else
    //             {
    //                 break;
    //             }
    //         }
    //     }
    //     if (!one && !two)
    //     {
    //         break;
    //     }
    // }
    // for (auto i : ans)
    // {
    //     cout << i << " ";
    // }
    // cout << "\n";

    return 0;
}
