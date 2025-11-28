#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum1=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum1+=arr[i];
    }
    sort(arr, arr + n);
    reverse(arr, arr + n);

    int sum2=0;
    for(int i=0;i<n;i++){
       sum1-=arr[i];
       sum2+=arr[i];
       if(sum1<sum2){
        cout << i+1 <<endl;
        break;
       }
    }

    return 0;
}
