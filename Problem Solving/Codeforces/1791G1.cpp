#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, c; cin >> n >> c;
    ll arr[n+1];
    for(int i=1;i<n+1;i++){
        cin >> arr[i];
        arr[i]+=i;
    }
    sort(arr+1, arr+n+1);
    
    int teleports=0;
    for(int i=1;i<n+1;i++){
        if(arr[i]<=c){
            c-=arr[i];
            teleports++;
        }else break;
        
    }

    cout << teleports << endl;

}

int_fast32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    

    return 0;
}