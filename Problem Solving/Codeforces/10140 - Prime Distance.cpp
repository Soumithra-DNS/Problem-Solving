// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e6;
// vector<int> status(N, 0);
// vector<int> prime;
// int cnt = 1;
// void siv()
// {
//     status[1] = false;
//     prime.push_back(0);
//     for (int i = 2; i < sqrt(N); i++)
//     {
//         if (status[i] == 0)
//         {
//             // prime.push_back(i);
//             // status[i] = ++cnt;
//             for (int j = i * i; j < N; j += i)
//             {
//                 status[j] = -1;
//             }
//         }
//     }

//     for (int i = 2; i < N; i++)
//     {
//         if (status[i] == 0)
//         {
//             prime.push_back(i);
//             status[i] = cnt++;
//         }
//         else
//         {
//             status[i] = cnt;
//         }
//     }

//     // for(int i = 0; i < 100; i++){
//     //     cout << status[i]<<" "<< i<< "\n";
//     // }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     siv();
//     int l, u;
//     while (cin >> l >> u)
//     {
//         int a = -1, b = -1;
//         int def1 = INT_MAX, def2 = INT_MIN;
//         int x1, y1, x2, y2;
//         for (int i = status[l]; i < status[u] && status[u] - status[l] > 1; i++)
//         {

//             // if (a == -1)
//             // {
//             //     a = prime[i];
//             //     continue;
//             // }
//             // else
//             // {
//             //     b = a;
//             //     a = prime[i];
//             // }
//             // cout << i <<"\n";
//             a = prime[i + 1];
//             b = prime[i];

//             if (def1 > a - b)
//             {
//                 def1 = a - b;
//                 x1 = b;
//                 y1 = a;
//             }
//             if (def2 < a - b)
//             {
//                 def2 = a - b;
//                 x2 = b;
//                 y2 = a;
//             }
//         }
//         if (a == -1 || b == -1)
//         {
//             cout << "There are no adjacent primes." << "\n";
//         }
//         else

//             cout << x1 << "," << y1 << " are closest, " << x2 << "," << y2 << " are most distant.\n";
//     }
// }

#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

// Function to generate all prime numbers up to `n` using the Sieve of Eratosthenes
vector<int> sieve_of_eratosthenes(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

// Function to find all prime numbers in the range [L, U] using a segmented sieve
vector<int> find_primes_in_range(int L, int U, const vector<int>& small_primes) {
    vector<bool> is_prime(U - L + 1, true);
    if (L == 1) is_prime[0] = false; // 1 is not a prime number
    for (int prime : small_primes) {
        if (prime * prime > U) break;
        int start = max(prime * prime, (L + prime - 1) / prime * prime);
        for (int j = start; j <= U; j += prime) {
            is_prime[j - L] = false;
        }
    }
    vector<int> primes_in_range;
    for (int i = 0; i < U - L + 1; ++i) {
        if (is_prime[i]) {
            primes_in_range.push_back(L + i);
        }
    }
    return primes_in_range;
}

// Main function to find the closest and most distant pairs of adjacent primes
void find_adjacent_primes(int L, int U) {
    int limit = static_cast<int>(sqrt(U)) + 1;
    vector<int> small_primes = sieve_of_eratosthenes(limit);
    vector<int> primes_in_range = find_primes_in_range(L, U, small_primes);

    if (primes_in_range.size() < 2) {
        cout << "There are no adjacent primes." << endl;
        return;
    }

    pair<int, int> closest_pair, most_distant_pair;
    int min_distance = INT_MAX, max_distance = INT_MIN;

    for (size_t i = 0; i < primes_in_range.size() - 1; ++i) {
        int p1 = primes_in_range[i];
        int p2 = primes_in_range[i + 1];
        int distance = p2 - p1;
        if (distance < min_distance) {
            min_distance = distance;
            closest_pair = {p1, p2};
        }
        if (distance > max_distance) {
            max_distance = distance;
            most_distant_pair = {p1, p2};
        }
    }

    cout << closest_pair.first << "," << closest_pair.second << " are closest, "
        << most_distant_pair.first << "," << most_distant_pair.second << " are most distant." << endl;
}

int main() {
    int L, U;
    while (cin >> L >> U) {
        find_adjacent_primes(L, U);
    }
    return 0;
}
