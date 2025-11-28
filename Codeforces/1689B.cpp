#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      int arr[n],a[n];
      for(int i=0;i<n;i++)
      {
            cin >> arr[i];
            a[i]=arr[i];
      }
      if(n==1)
         cout <<"-1"<<endl;
      else
      {

      sort(arr, arr+n);

      int temp;
      for(int i=0;i<n;i++)
      {
          if(arr[i]==a[i])
          {
             if(i!=n-1)
             {
                 temp=arr[i];
                 arr[i]=arr[i+1];
                 arr[i+1]=temp;
             }
             else
             {
                 temp=arr[i];
                 arr[i]=arr[i-1];
                 arr[i-1]=temp;
             }
          }
      }
      for(int i=0;i<n;i++)
        cout <<arr[i]<<" ";

      cout<<"\n";
      }
    }
    return 0;
}
