#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n],even=0,odd=0,match=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(i%2==0){
                if(arr[i]%2==0)
                    match++;
                else
                    odd++;
            }
            else{
                if(arr[i]%2==0)
                    even++;
                else
                    match++;
            }
        }
        if(match==n)
            cout <<"0"<<endl;
        else if(odd==even)
            cout << even <<endl;
        else
            cout <<"-1"<<endl;
    }
    return 0;
}
