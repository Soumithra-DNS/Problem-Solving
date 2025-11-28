#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%2==0){
        int arr[n];
        int j=0;

        for(int i=n;i>0;i--){
            arr[j]=i;
            j++;
        }

        if(n%2==1){
            int z=n/2;
            int temp=arr[z];
            arr[z]=arr[z-1];
            arr[z-1]=temp;
        }

        for(int i=0;i<n;i++){
            cout << arr[i] <<" " ;
        }
    }
    else{
        cout <<"-1"<<endl;
    }


    return 0;
}
