#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int z=(n/2)-1;
        int j=2,sum=0,sum1=0;
        for(int i=0;i<n;i++){
           arr[i]=j;
           sum+=arr[i];
           if(i>=z && i<=z*2)
            sum1+=arr[i];

           j=j*2;
        }
        int sub=(sum-sum1)-sum1;
        cout << sub << endl;
    }

    return 0;
}
