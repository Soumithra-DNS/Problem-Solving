#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int s=0,d=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int i=0,j=n-1;
    for(int z=0;z<n;z++){
        if(z%2==0){
            if(arr[i]>arr[j]){
                s+=arr[i];
                i++;
            }
            else{
                s+=arr[j];
                j--;
            }
        }
        else{
            if(arr[i]>arr[j]){
                d+=arr[i];
                i++;
            }
            else{
                d+=arr[j];
                j--;
            }
        }
    }
    cout <<s<<" "<<d;


    return 0;
}
