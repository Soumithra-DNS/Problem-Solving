#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n],one=0,m=0,z;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]==1)
        {
            one++;
            if(i==n-1)
            z=one;
        }
        else
        {
            if(m<one)
                m=one;
            one=0;
        }
    }
    one=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            one++;
        else
        {
           if(one+z>m)
            m=one+z;
           break;
        }
    }
    cout <<m<<endl;


    return 0;
}
