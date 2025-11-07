#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5;
vector<bool> is_prime(N + 1, true);
void sieve()
{
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i] && (long long)i * i <= N)
        {
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}
void solve()
{
    int n; cin >> n;
    if(n < 5){
        cout << "-1" << "\n";
        return;
    }
    int mx = 2 * n - 1;
    int x = -1, y = -1;
    for(int i = mx; i > 0; i -= 2){
        if(i % 2 == 1 && !is_prime[i]){
            y = i / 2;
            x = y + 1;
            if(x % 2 == 0){
                swap(x,y);
            }
            break;
        }
    }
    for(int i = 1; i <= n; i += 2){
        if( i == x) continue;
        cout << i << " ";
    }
    cout << x << " " << y << " ";
    for(int i = 2; i <= n; i += 2){
        if( i == y) continue;
        cout << i << " ";
    }
    cout << "\n";

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
