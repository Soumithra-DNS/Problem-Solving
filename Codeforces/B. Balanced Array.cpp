#include<iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    if(n%4==0){
      int arr[n];
      int z=n/2, sum=0,k=2;
        for(int i=0;i<z;i++){
           arr[i]=k;
           sum+=arr[i];
           k+=2;
        }
        k=1;
        for(int i=z;i<n-1;i++){
          arr[i]=k;
          sum-=arr[i];
          k+=2;
        }
        arr[n-1]=sum;
        cout << "YES" << endl;
        for(int i=0;i<n;i++){
            cout << arr[i]<<" ";
        }
        cout << endl;
    }
    else
        cout << "NO"<< endl;
  }
   return 0;
}
