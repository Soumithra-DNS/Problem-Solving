#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

long long fact(int n){
    if(n == 1){
        return 1;
    }
    return fact(n - 1) * n;
}
void solve()
{
    int n; cin >> n;
    cout << fact(n) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();
    
    return 0;
}
