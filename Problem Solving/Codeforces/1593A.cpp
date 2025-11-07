#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int arr[3],max=0;
        for(int i=0;i<3;i++){
            cin >> arr[i];
            if(max<arr[i])
                max=arr[i];
        }
        int count=0,x;
        for(int i=0;i<3;i++){
            if(max==arr[i]){
                count++;
                x=i;
            }
        }
        if(count==1){
            max++;
            for(int i=0;i<3;i++)
                arr[i]=max-arr[i];

            arr[x]=0;
        }
        else{
            max++;
            for(int i=0;i<3;i++)
                arr[i]=max-arr[i];
        }

        for(int i=0;i<3;i++)
        cout <<arr[i]<<" ";
        cout << endl;
    }

}
