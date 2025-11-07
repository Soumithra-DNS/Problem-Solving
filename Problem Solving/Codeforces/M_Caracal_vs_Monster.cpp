#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n, ans = 0, z = 0;
    cin >> n;

    while(n){

        z++;
        n = n / 2;
    }

    for(long long i = z - 1; i >= 0; i--){
        ans += pow(2, i);
        //cout << z << "\n";
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}
