#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n],count=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==1)
            count++;
    }
    cout << count <<endl;
    for(int i=0;i<n-1;i++){
            if(arr[i]>=arr[i+1]){
              cout<<arr[i]<<" ";
            }

    }
    cout <<arr[n-1]<<endl;


    return 0;
}
