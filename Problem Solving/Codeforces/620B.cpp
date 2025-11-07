#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,a;   cin >> n >> a;
    int arr[n+1];
    for(int i=1;i<=n;i++) cin >> arr[i];
    int z=max(a-1,n-a);
    int l=a,r=a,ans=0;
    if(arr[a]==1)
        ans++;

    while(z--)
    {
        l--;
        r++;
        if(arr[l]==1 && arr[r]==1) ans+=2;
        else if(l<1 && arr[r]==1) ans++;
        else if(r>n && arr[l]==1) ans++;
    }
    cout << ans << endl;

    return 0;
}
