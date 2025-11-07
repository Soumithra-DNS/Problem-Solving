#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, X; cin >> x;
    int n = 0;
    X = x;
    while(X){
        n++;
        X /= 2;
    }
    
    vector<int>ans(n);
    int i = n;
    i--;
    while(i >= 0){
        if(x !=0 && x >= pow(2, i)){
            x -= pow(2, i);
        //cout << x << " ";
            ans[i] = 1;
        }
        else{
            ans[i] = 0;
        } 
        i--;
    }

    cout << n << "\n";

    for(auto i : ans){
        cout << i << " ";
    }
    cout << "\n";
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
