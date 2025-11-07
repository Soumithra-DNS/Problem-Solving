#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, f, k;
    cin >> n >> f >> k;
    int arr[105] = {0};
    int fav;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(i == f){
            fav = x;
        }
        arr[x]++;
    }

    for(int i = 101; i > 0; i--){
        k -= arr[i];
        if(i == fav){
            if(k >= 0){
                cout << "YES" << "\n";
            }else{
                cout << "MAYBE" << "\n";
            }
            return;
        }
        if(k <= 0){
            break;
        }
    }

    cout << "NO" << "\n";
    return;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
