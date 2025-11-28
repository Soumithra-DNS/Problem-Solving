// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// int solve(int i, int n, int k, int prev, vector<int>&s, vector<int>&c, vector<vector<int>>&dp)
// {
//     if(k == 0) return 0;
//     if(i == n) return 1e15;
//     if(dp[i][k] != -1){
//         return dp[i][k];
//     }
//     int notTake = 0 + solve(i + 1, n, k, prev, s, c, dp);
//     int Take = 1e15;
//     if(s[i] > prev){
//         Take = c[i] + solve(i + 1, n, k - 1, s[i], s, c, dp);
//     }
//     return dp[i][k] = min(Take, notTake);
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n; cin >> n;
//     vector<int>s(n + 1), c(n + 1);
//     for(int i = 0; i < n; i++){
//         cin >> s[i];
//     }
//     for(int i = 0; i < n; i++){
//         cin >> c[i];
//     }
//     vector<vector<int>> dp(n + 1, vector<int>(5, -1));
//     int ans = solve(0, n, 3, -1, s, c, dp);
//     if(ans == 1e15) ans = -1;
//     cout << ans << "\n";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> s(n + 1), c(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(4, 0));
    int ans = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        int a = INT_MAX;
        int b = INT_MAX;
        for(int j = 0; j < i; j++){
            if(s[i] > s[j])
            a = min(a, c[j]);
        }
        for(int k = i + 1; k < n; k++){
            if(s[i] < s[k])
            b = min(b, c[k]);
        }
        ans = min(ans, a + c[i] + b);
    }
    if(ans >= INT_MAX) ans = -1;
    cout << ans << "\n";

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int recursiveSelect(int idx, int remaining, int lastSize, const vector<int>& s, const vector<int>& c, vector<vector<int>>& memo) {
//     if (remaining == 0) return 0; // Base case: selected all 3 indices
//     if (idx >= s.size()) return INT_MAX; // Out of bounds, return a large value
//     if (memo[idx][remaining] != -1) return memo[idx][remaining]; // Check memoization

//     // Option 1: Skip the current index
//     int skip = recursiveSelect(idx + 1, remaining, lastSize, s, c, memo);

//     // Option 2: Take the current index (only if its size is larger than last selected size)
//     int take = INT_MAX;
//     if (s[idx] > lastSize) {
//         int result = recursiveSelect(idx + 1, remaining - 1, s[idx], s, c, memo);
//         if (result != INT_MAX) {
//             take = c[idx] + result;
//         }
//     }

//     // Store and return the minimum of both options
//     return memo[idx][remaining] = min(skip, take);
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> s(n), c(n);
//     for (int i = 0; i < n; i++) cin >> s[i];
//     for (int i = 0; i < n; i++) cin >> c[i];

//     vector<vector<int>> memo(n, vector<int>(4, -1)); // Memoization table
//     int result = recursiveSelect(0, 3, -1, s, c, memo);

//     if (result == INT_MAX) {
//         cout << -1 << endl; // No valid triplet found
//     } else {
//         cout << result << endl; // Output the minimum cost
//     }

//     return 0;
// }
