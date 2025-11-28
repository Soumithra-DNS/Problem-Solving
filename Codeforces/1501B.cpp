#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n],a[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int temp=0;
        for(int i=n-1;i>=0;i--){
            temp=max(temp,arr[i]);
            if(temp>0){
                temp--;
                a[i]=1;
            }
            else
                a[i]=0;
        }
        for(int i=0;i<n;i++)
            cout << a[i] <<" ";

        cout <<endl;

    }

    return 0;
}
