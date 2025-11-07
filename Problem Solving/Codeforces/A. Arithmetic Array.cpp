#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n],sum=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum+=arr[i];
        }

        if(sum==n)
            cout << "0" << endl;
        else if(sum>n)
            cout << sum-n << endl;
        else if(sum<n)
            cout << "1"<< endl;


    }


    return 0;
}
