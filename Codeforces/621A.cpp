#include<bits/stdc++.h>
using namespace std;
int main()
{
    int long long n;
    cin >> n;
    int long long arr[n],sum=0,min=10000000000;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
        if(arr[i]%2==1){
            if(min > arr[i])
                min = arr[i];
        }
    }

    if(sum%2==1){
        sum=sum-min;
    }
    cout << sum << endl;


    return 0;
}
