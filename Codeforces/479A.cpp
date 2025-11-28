#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,arr[6];
    cin >> a >> b >> c;
    arr[0]=a+b+c;
    arr[1]=a*b*c;
    arr[2]=(a+b)*c;
    arr[3]=a*(b+c);
    arr[4]=a*b+c;
    arr[5]=a+b*c;
    sort(arr, arr+6);
    cout << arr[5] << endl;
    return 0;
}
