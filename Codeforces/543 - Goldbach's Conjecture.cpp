// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e6 + 5;
// vector<bool>status(N, true);

// void siv()
// {
//     for(int i = 2; i <= sqrt(N); i++){
//         if(status[i]){
//             for(int j = i * i; j < N; j += i){
//                 status[j] = false;
//             }
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     siv();
//     while(true){
//         int n; cin >> n;
//         if(n == 0){
//             break;
//         }
//         bool check = true;
//         for(int i = 2; i < n; i++){
//             if(status[n - i]){
//                 cout << n << " = " << i << " + " << n - i << "\n";
//                 check = false;
//                 break;
//             }
//         }
//         if(check){
//             cout << "Goldbach's conjecture is wrong." << "\n";
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int MAX = 1000000;
// vector<bool> is_prime(MAX, true);
// vector<int> primes;

// // Sieve of Eratosthenes to find all primes less than MAX
// void sieve() {
//     is_prime[0] = is_prime[1] = false;
//     for (int i = 2; i * i < MAX; ++i) {
//         if (is_prime[i]) {
//             for (int j = i * i; j < MAX; j += i) {
//                 is_prime[j] = false;
//             }
//         }
//     }
//     for (int i = 2; i < MAX; ++i) {
//         if (is_prime[i]) {
//             primes.push_back(i);
//         }
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     sieve();

//     int n;
//     while (cin >> n && n != 0) {
//         bool found = false;
//         int a = 0, b = 0;

//         for (int prime : primes) {
//             if (prime >= n) break;
//             if (is_prime[n - prime]) {
//                 a = prime;
//                 b = n - prime;
//                 found = true;
//                 // Continue to find the pair with the maximum difference
//             }
//         }

//         if (found) {
//             cout << n << " = " << a << " + " << b << "\n";
//         } else {
//             cout << "Goldbach's conjecture is wrong.\n";
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
vector<bool> status(N);

void siv()
{
    int sq = sqrt(N);

    // for (int i = 4; i <= N; i += 2)
    // {
    //     status[i] = 1;
    // }

    for (int i = 2; i <= sq; i++)
    {
        if (status[i] == 0)
        {
            for (int j = i * i; j <= N; j += i)
                status[j] = 1;
        }
    }

    status[1] = 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    siv();
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        bool check = true;
        for (int i = 2; i < n; i++)
        {
            if (!status[i] && !status[n - i])
            {
                cout << n << " = " << i << " + " << n - i << "\n";
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << "Goldbach's conjecture is wrong." << "\n";
        }
    }
    return 0;
}