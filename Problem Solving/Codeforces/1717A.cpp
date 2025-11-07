#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int n,ans;
        cin >> n;
        ans=n+2*((n/2)+(n/3));
        cout << ans << endl;
    }
    return 0;
}
