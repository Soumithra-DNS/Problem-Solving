#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int arr[12];
    for(int i=0;i<12;i++)
        cin >> arr[i];
    sort (arr, arr+12);
    reverse(arr, arr+12);

    int sum=0,i;
    for( i=0;i<12;i++){
        sum+=arr[i];
        if(sum>=k)
            break;
    }
    if(k==0)
        cout<< "0" << endl;
    else if(sum>=k && k!=0)
        cout << i+1 << endl;
    else
        cout <<"-1"<< endl;

    return 0;
}
