#include<iostream>
using namespace std;
int main()
{
   int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
   int num1, num2,z=0;
   cin >> num1 >> num2;

   for(int i=0;i<15;i++){
    if(arr[i]==num1){
        z=5;
        if(arr[i+1]==num2){
            cout <<"YES" <<endl;
            break;
        }
        else{
           cout <<"NO" <<endl;
            break;
        }
        }
   }
   if(z==0)
    cout <<"NO" <<endl;

    return 0;
}
