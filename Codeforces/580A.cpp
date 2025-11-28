#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int arr[n];
   for(int i=0;i<n;i++)
        cin >> arr[i];
   int count =0,max=0;
   for(int i=0;i<n-1;i++){
     if(arr[i]<=arr[i+1])
        count++;
     else{
        if(count>max)
            max=count;

        count=0;
     }
   }
   if(count>max)
        max=count;

   cout <<max+1 << endl;

    return 0;
}
