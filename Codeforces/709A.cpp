#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, d;
    cin >> n >> l >> d;
    int arr[n],sum=0, count=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]<=l)
            sum+=arr[i];

        if(sum>d){
            sum=0;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
