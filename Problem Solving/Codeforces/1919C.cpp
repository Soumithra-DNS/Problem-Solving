#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int cnt = 0;
    int first = INT_MAX;
    int second = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
        if(first > second){
            swap(first, second);
        }
        if(first >= arr[i]){
            first = arr[i];
        }else if( second >= arr[i]){
            second = arr[i];
        }else{
            first = arr[i];
            cnt++;
        }
    }
    
    cout << cnt << endl;
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
