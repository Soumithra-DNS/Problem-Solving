#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int m=2*n;
        int array[m];
        for(int j=0;j<m;j++){
            cin>>array[j];
        }
        sort(array,array+m);
        cout<<abs(array[n-1]-array[n])<<endl;


    }
}
