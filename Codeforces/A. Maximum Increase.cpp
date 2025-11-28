#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n],cou=1,mx=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];

        if(i>0){
           if(arr[i]>arr[i-1]){
            cou++;
           }
           else{
                if(mx<cou){
                  mx=cou;
                }

                cou=1;
           }
        }

    }
    if(mx<cou){
      mx=cou;
    }

    cout << mx;

    return 0;
}
