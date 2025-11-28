#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define f(i, s, n) for (int i = s; i < n; i++)

void solve()
{
    int n, t;
    cin >> n >> t;
    int arr[n + 1];
    arr[0] = 0;
    for(int i =1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    
    int books, ans = 0;
    for( int i = 1; i <= n; i++)
    {
        books = upper_bound(arr + i, arr + n + 1, arr[i - 1] + t) - (arr + i);
        ans = max(ans, books);
    }

    cout << ans << endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
