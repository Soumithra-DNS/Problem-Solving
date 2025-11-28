#include <bits/stdc++.h>
using namespace std;
void print(int i){
    if(i == 0){
        return;
    }
    if(i == 1){
        cout << i;
    }else
    cout << i << " ";
    print(--i);
}
void solve()
{
    int n; cin >> n;
    print( n);
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
