// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int a, b;
//     cin >> a >> b;

//     // map<int, int>mp;
//     int n = max(a, b);
//     int mn = min(a / 2, b / 2);
//     vector<int> mp(n + 1, 0);
//     for (int i = 1; i <= sqrt(a); i++)
//     {
//         if (a % i == 0)
//         {
//             mp[i] = 1;
//             if (a / i <= mn)
//                 mp[a / i] = 1;
//         }
//     }
//     // for(auto i : mp){
//     //     cout << i << " ";
//     // }
//     mp[a] = 1;

//     int cnt = 0;
//     for (int i = 1; i <= sqrt(b); i++)
//     {
//         if (b % i == 0 && mp[i] == 1)
//         {
//             cnt++;
//             if (mp[b / i] == 1)
//             {
//                 cnt++;
//                 // cout << b / i << " ";
//             }
//             // cout << i << " ";
//         }
//     }
//     // if (a == b)
//     // {
//     //     cnt++;
//     // }

//     cout << cnt << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int a, b;
//     cin >> a >> b;

//     set<int> divisors_a;
//     set<int> divisors_b;

//     for (int i = 1; i <= sqrt(a); ++i)
//     {
//         if (a % i == 0)
//         {
//             divisors_a.insert(i);
//             divisors_a.insert(a / i);
//         }
//     }

//     for (int i = 1; i <= sqrt(b); ++i)
//     {
//         if (b % i == 0)
//         {
//             divisors_b.insert(i);
//             divisors_b.insert(b / i);
//         }
//     }

//     vector<int> common_divisors;
//     set_intersection(divisors_a.begin(), divisors_a.end(),
//                      divisors_b.begin(), divisors_b.end(),
//                      back_inserter(common_divisors));

//     cout << common_divisors.size() << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

// Function to count the divisors of a number
int count_divisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            count++;
            if (i != n / i) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    vector<int> results(T);
    
    for (int i = 0; i < T; ++i) {
        int A, B;
        cin >> A >> B;
        int gcd_ab = __gcd(A, B);
        cout << gcd_ab << " " <<count_divisors(gcd_ab) << "\n";
        //results[i] = count_divisors(gcd_ab);
    }
    
    // for (int result : results) {
    //     cout << result << "\n";
    // }

    return 0;
}
