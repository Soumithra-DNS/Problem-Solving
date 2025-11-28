
#include<bits/stdc++.h>
using namespace std;
void solve()
{

    int n, x; cin >> n >> x;
    int arr[n];
    cin >> arr[0];
    int tank_contains=arr[0];
    for(int i =1;i<n; i++)
    {
        cin >> arr[i];
        tank_contains = max(tank_contains,arr[i]-arr[i-1]);
    }
    tank_contains = max(tank_contains,(x-arr[n-1])*2 );
    cout << tank_contains << endl;

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

