#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n],count=0,count1=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==0)
                count++;
        }
        for(int i=0;arr[i]!=1;i++)
            count1++;

        for(int i=n-1;arr[i]!=1;i--)
            count1++;

        cout << (count-count1) << endl;

    }

    return 0;
}
