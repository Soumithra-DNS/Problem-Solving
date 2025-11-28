#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        //int arr[n+1];
        int sum=(n*(n+1))/2;
        int x=(sum-1)/n;
        x++;
        sum=(x*n)-(sum-1);
        cout<<sum<<" ";
        for(int i=2;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;


    }
    return 0;
}
