#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n , m; cin >> n >> m;
    int arr[n],arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    string s; cin >> s;
    int ans[n + 1], z = 0;
    int l = 0, r = n -1;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'R'){
            arr1[z] = arr[r];
            r--;
            z++;
        }else{
            arr1[z] = arr[l];
            l++;
            z++;
        }
    }
    reverse(arr1, arr1+n);
    int k = n-1, pre = 1;
    for(auto c: arr1){
        // cout<<c<<' ';
        ans[k--] = (c*pre)%m;
        pre = (pre*c)%m;
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout <<"\n";
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
