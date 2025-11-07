#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];

    int sum=0;
    for(int i=0;i<n;i++){
        int temp=sum;
        if(arr[i]<0){
            temp+=arr[i];
            cout << temp" ";
        }

        sum+=arr[i];
        cout << sum <<" ";
    }


    return 0;
}
