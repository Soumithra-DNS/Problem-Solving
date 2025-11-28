#include<bits/stdc++.h>
using namespace std;
void solve()
{
   long long int n;
   cin >> n;
   long long int arr[n],temp,mx=-1000000000000000000;
   for(int i=0;i<n;i++)
    cin >> arr[i];

   sort(arr,arr+n);
   for(int i=0;i<n-1;i++)
   {
       temp=arr[i]*arr[i+1];
       if(mx<temp)
          mx=temp;
   }
   cout<<mx << endl;
  /* for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";*/

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;   cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
