#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n],even=0,odd=0;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    if(even > odd){
      for(int i=1;i<=n;i++){
        if(arr[i]%2==1){
            cout << i << endl;
            break;
        }
      }
    }
    else{
        for(int i=1;i<=n;i++){
        if(arr[i]%2==0){
            cout << i << endl;
            break;
        }
      }
    }




    return 0;
}
