#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       int arr[n+1],count=0;

       for(int i=0;i<n+1;i++){
        if(i==0)
          arr[i]=0;
        else{
          cin >> arr[i];
             if(arr[i]-arr[i-1]>=120){
             count+=(arr[i]-arr[i-1])/120;
        }

       }

       }

       if(count>1)
        cout << "YES"<<endl;
       else{
        count+=(1440-arr[n])/120;
        if(count>1)
            cout << "YES"<< endl;
        else
            cout << "NO"<<endl;
       }

    }
    return 0;
}
