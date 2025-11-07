#include <bits/stdc++.h>
using namespace std;
void print(int i, int n){
    if(i > n){
        return;
    }
    cout << i << "\n";
    print(++i, n);
}
void solve()
{
    int n; cin >> n;
    print(1, n);
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
