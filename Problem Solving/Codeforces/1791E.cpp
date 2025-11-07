#include<bits/stdc++.h>
#define ll long long
#define pb push_back
const long long mod = 1e9+7;
using namespace std;

void solve()
{
    int n; cin >> n;
    int arr[n];
    ll sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr ,arr+n);

    for(int i=0;i<n-1;i++){
        if(arr[i]+arr[i+1]<0){
            arr[i]=-arr[i];
            arr[i+1]=-arr[i+1];
        }
        sum+=arr[i];
    }
    sum+=arr[n-1];
    cout<< sum <<endl;

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