#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int mi,mx;

    mi=arr[1]-arr[0];
    mx=arr[n-1]-arr[0];
    cout << mi <<" " << mx <<endl;
    for(int i=1;i<n-1;i++){
        int x=arr[i+1]-arr[i];
        int y=arr[i]-arr[i-1];
        mi=min(x,y);

        x=arr[n-1]-arr[i];
        y=arr[i]-arr[0];
        mx=max(x,y);

        cout << mi <<" "<< mx<<endl;
    }
    mi=arr[n-1]-arr[n-2];
    mx=arr[n-1]-arr[0];
    cout << mi <<" "<< mx<<endl;


    return 0;
}
