#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];

        for(int i=n-1;i>=0;i--)
        {
            if(i%2!=0)
            {
               arr[i]=arr[i]*(-1);
            }
            cout <<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
