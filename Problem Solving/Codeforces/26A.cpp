#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 2; i <= n; i++){
        int k = i;
        int cnt = 0;
        for(int j = 2; j * j <= k; j++){
            if(k % j == 0){
                cnt++;
                while(k % j == 0){
                    k = k / j;
                }
            }
        }
        if(k > 1){
            cnt++;
        }
        if(cnt == 2){
            ans++;
        }
        // cnt += (x > 1);
        // ans += (cnt == 2);
    }

    cout<< ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}


// #include <bits/stdc++.h>

// using i64 = long long;

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
    
//     int n;
//     std::cin >> n;
    
//     int ans = 0;
//     for (int i = 2; i <= n; i++) {
//         int cnt = 0;
//         int x = i;
//         for (int j = 2; j * j <= x; j++) {
//             if (x % j == 0) {
//                 cnt += 1;
//                 while (x % j == 0) {
//                     x /= j;
//                 }
//             }
//         }
//         cnt += (x > 1);
//         ans += (cnt == 2);
//     }
//     std::cout << ans << "\n";
    
//     return 0;
// }
