#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;

       int arr[n],sum=0,z=0,a=0,b=0;

       for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
       }

       for(int i=0;i<n-1;i++){
        if(arr[i]==-1 && arr[i+1]==-1 ){
          z=5;
          break;
        }
        else if( (arr[i]==-1 && arr[i+1]==1) || (arr[i]==1 && arr[i+1]==-1) ){
            a=1;
        }
        else if(arr[i]==1 && arr[i+1]==1){
            b=1;
        }
       }

       if(z==5){
            sum+=4;
       }
       else{
        if(a==1){
            sum=sum;
        }
        else{
            if(b==1)
                sum-=4;
        }
       }

       cout << sum << endl;

    }

    return 0;
}
