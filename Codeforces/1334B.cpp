#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n, k, z=0,x=0,y;
    cin >> n >> k;
    long long int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    sort(a,a+n);
    reverse(a, a+n);
    for(int i=0;i<n;i++)
    {
        z+=a[i];
        if(z/(i+1)>=k)
            x=i+1;
    }
    cout << x<< endl;

}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
