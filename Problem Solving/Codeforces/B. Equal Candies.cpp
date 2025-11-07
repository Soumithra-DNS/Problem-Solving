#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n],mi,sum=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum+=arr[i];

            if(i==0)
                mi=arr[i];
            else{
               if(arr[i]<mi)
                 mi=arr[i];
            }
        }
        cout << sum-(mi*n) << endl;

    }

    return 0;
}
