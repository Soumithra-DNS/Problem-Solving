#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n],max=0,min=100,a,b;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>max){
            max=arr[i];
            a=i;
        }
        if(arr[i]<=min){
            min=arr[i];
            b=i;
        }
    }
    int swap;
    if(a>b){
        b++;
    }

    swap=a+(n-1)-b;

    cout << swap;


    return 0;
}
