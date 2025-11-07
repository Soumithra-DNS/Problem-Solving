#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
       int n,  c;
       cin >> n >> c;
       int arr[101]={},x,cost=0;
       for(int i=0;i<n;i++){
        cin >> x;
        arr[x]++;
       }
       for(int i=0;i<101;i++){
        if(arr[i]>0){
          if(arr[i]<c){
            cost+=arr[i];
          }
          else{
            cost+=c;
          }
        }
       }
       cout << cost << endl;
    }

    return 0;
}
