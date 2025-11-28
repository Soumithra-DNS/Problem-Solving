#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[7];
    for(int i=0;i<7;i++)
        cin >>arr[i];

    int i=0,count=0;
    while(n>0){
        count++;
       n-=arr[i%7];
       i++;
    }

    if(count%7==0)
        cout <<7<<endl;
    else
        cout << count%7<< endl;

    return 0;
}
