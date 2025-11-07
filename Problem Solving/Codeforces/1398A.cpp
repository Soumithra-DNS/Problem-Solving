#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,z=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];

        }
        for(int i=2;i<n;i++){
            if(arr[0]+arr[1]<=arr[i]){
                z=1;
                cout <<"1 2 "<<i+1<<endl;
                break;
            }
        }
        if(z==0)
            cout << "-1"<< endl;


    }

    return 0;
}

