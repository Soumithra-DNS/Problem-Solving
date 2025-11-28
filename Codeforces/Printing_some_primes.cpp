// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e7 + 2;
// // vector<int> status(N / 32);
// bool Check(int n, int pos)
// {
//     return (bool)n & (1 << pos);
// }
// int Set(int N, int pos) { return N = N | (1 << pos); }
// void siv()
// {
//     int cnt = 0;
//     int n = sqrt(N);
//     for (int i = 3; i < n; i += 2)
//     {
//         if (check(status[i >> 5], i & 31) == 0)
//         {
//             for (int j = i * i; j < N; j += 2)
//             {
//                 status[j >> 5] = Set(status[j >> 5], j & 31);
//             }
//         }
//     }
//     cnt++;
//     cout << 2 << "\n";
//     for (int i = 3; i < N; i += 2)
//     {
//         if (check(status[i >> 5], i & 31))
//         {
//             cnt++;
//             // if(cnt % 100 == 1){
//             //     cout << i << "\n";
//             // }
//             cout << i << "\n";
//         }
//     }
// }
// int status[(N / 32) + 2];
// void sieve()
// {
//     int i, j, sqrtN;
//     sqrtN = int(sqrt(N));
//     for (i = 3; i <= sqrtN; i += 2)
//     {
//         if (Check(status[i >> 5], i & 31) == 0)
//         {
//             for (j = i * i; j <= N; j += 2*i)
//             {
//                 status[j >> 5] = Set(status[j >> 5], j & 31);
//             }
//         }
//     }

//     puts("2");
//     for (i = 3; i <= 20; i += 2)
//         if (Check(status[i >> 5], i & 31) == 0)
//             printf("%d\n", i);
// }

// void sieve()
// {
//     int i, j, sqrtN;
//     sqrtN = int(sqrt(N));
//     for (i = 3; i <= sqrtN; i += 2)
//     {
//         if (Check(status[i / 32], i % 32) == 0)
//         {
//             for (j = i; j <= N; j +=  i)
//             {
//                 status[j / 32] = Set(status[j / 32], j % 32);
//             }
//         }
//     }
//     puts("2");
//     for (i = 3; i <= N; i += 2)
//         if (Check(status[i / 32], i % 32) == 0)
//             printf("%d\n", i);
// }

// void sieve()
// {
//     int i, j, sqrtN;
//     sqrtN = int(sqrt(N));
//     for (i = 3; i <= sqrtN; i++)
//     {
//         if (Check(status[i >> 5], i & 31) == 0)
//         {
//             for (j = i; j * j <= N; j += (i << 1))
//             {
//                 status[j >> 5] = Set(status[j >> 5], j & 31);
//             }
//         }
//     }
//     vector<int> prime;

//     prime.push_back(2);
//     for (i = 3; i <= N; i += 2)
//     {
//         if (Check(status[i >> 5], i & 31) == 0)
//         {
//             // cnt++;
//             // cout << i << "\n";
//             // if(cnt % 100 == 1){
//             // }

//             prime.push_back(i);
//         }
//     }

//     for (int i = 0; i < 20; i++)
//     {
//         cout << prime[i] << "\n";
//     }
// }

// void solve()
// {
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     sieve();
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// const int MAX = 1000000; // 10^8

// void sieve(vector<int> &primes) {
//     vector<bool> is_prime(MAX + 1, true);
//     is_prime[0] = is_prime[1] = false;

//     for (int i = 2; i * i <= MAX; ++i) {
//         if (is_prime[i]) {
//             for (int j = i * i; j <= MAX; j += i) {
//                 is_prime[j] = false;
//             }
//         }
//     }

//     for (int i = 2; i <= MAX; ++i) {
//         if (is_prime[i]) {
//             primes.push_back(i);
//         }
//     }
// }

// int main() {
//     vector<int> primes;
//     sieve(primes);

//     for (size_t i = 0; i < primes.size(); i += 100) {
//         cout << primes[i] << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e8;
vector<char> vec(N + 1, true);
vector<int> ans;

void pre_cal()
{
    for (int i = 2; i <= N; i++)
    {
        if (vec[i] == true)
        {
            ans.push_back(i);
            for (int j = i * i; j <= N; j += i)
            {
                vec[j] = false;
            }
        }
    }

    for (int i = 0; i < ans.size(); i += 100)
    {
        cout << ans[i] << "\n";
    }
}

int32_t main()
{
    pre_cal();

    return 0;
}
