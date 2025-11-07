// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n; cin >> n;
//     int cnt = 1;
//     for(int i = 2; i <= sqrt(n); i++){
//         if(n % i == 0){
//             cnt += i;
//             if(i != n / i)
//                 cnt += (n / i);
//         }
//     }
//     if(n == 1){
//         cnt--;
//     }
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
// #define endl "\n"

// void slv() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> v[i];
//     }

//     deque<int> deq;
//     for (int i = 0; i < n; ++i) {
//         deq.push_back(i);
//     }

//     vector<int> ans;
//     int s = 1, e = n;

//     for (int i = 1; i <= n; ++i) {
//         if (i % 2 != 0) {
//             for (int j = 0; j < deq.size(); ++j) {
//                 if (v[deq[j]] == s) {
//                     ans.push_back(deq[j]);
//                     deq.erase(deq.begin() + j);
//                     break;
//                 }
//             }
//             ++s;
//         } else {
//             for (int j = 0; j < deq.size(); ++j) {
//                 if (v[deq[j]] == e) {
//                     ans.push_back(deq.size() - j - 1);
//                     deq.erase(deq.begin() + j);
//                     break;
//                 }
//             }
//             --e;
//         }
//     }

//     for (const auto &index : ans) {
//         cout << index << endl;
//     }
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t = 1;
//     while (t--) {
//         slv();
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl "\n";
// int N = 1e7;
// void slv()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     int s = 1, e = n;
//     vector<int> ans;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             for (int i = 0; i < v.size(); i++)
//             {
//                 if (v[i] == s)
//                 {
//                     ans.push_back(i);
//                     v.erase(v.begin() + i);
//                 }
//             }
//             s++;
//         }
//         else
//         {
//             for (int i = 0; i < v.size(); i++)
//             {
//                 if (v[i] == e)
//                 {
//                     ans.push_back(v.size() - i - 1);
//                     v.erase(v.begin() + i);
//                 }
//             }
//             e--;
//         }
//     }
//     for (auto i : ans)
//     {
//         cout << i << endl;
//     }
// }
// int32_t main()
// {
//     std::ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         slv();
//     }
// }


#include <bits/stdc++.h>
using namespace std;

void slv() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    set<pair<int, int>> s; // Stores (value, original index)
    for (int i = 0; i < n; ++i) {
        s.insert({v[i], i});
    }

    int s_val = 1, e_val = n;
    vector<int> ans;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            // Find and remove the element with value s_val
            auto it = s.lower_bound({s_val, 0});
            if (it != s.end() && it->first == s_val) {
                ans.push_back(it->second);
                s.erase(it);
                s_val++;
            }
        } else {
            // Find and remove the element with value e_val
            auto it = s.lower_bound({e_val, 0});
            if (it != s.end() && it->first == e_val) {
                ans.push_back(s.size - 1 - it->second);
                s.erase(it);
                e_val--;
            }
        }
    }

    for (const auto &index : ans) {
        cout << index << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    while (t--) {
        slv();
    }

    return 0;
}
