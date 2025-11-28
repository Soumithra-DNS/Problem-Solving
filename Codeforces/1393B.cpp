#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 7;
void solve()
{
    int n;
    cin >> n;
    int arr[mx] = {};
    int cnt2 = 0, cnt4 = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        arr[x]++;
        if(arr[x] % 4 == 0){
            cnt4++;
        }
        if(arr[x] % 2 == 0){
            cnt2++;
        }
    }
    int q; cin >> q;
    while(q--){
        char sine;
        int x;
        cin >> sine >> x;

        if(sine == '+'){
            arr[x]++;
            if(arr[x] % 4 == 0){
                cnt4++;
            }
            if(arr[x] % 2 == 0){
                cnt2++;
            }
        }else{
            if(arr[x] % 4 == 0){
                cnt4--;
            }
            if(arr[x] % 2 == 0){
                cnt2--;
            }
            arr[x]--;
        }

        if(cnt4 >= 1 && cnt2 > 3){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
