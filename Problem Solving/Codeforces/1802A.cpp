#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--){
    int n, sum = 0, add = 0;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i] > 0)
            sum++;
        else add++;
    }
    int i;
    for(i=1;i<=sum;i++)
        cout <<i<<" ";
    int k=i-1;
    for(int j=1;j<=add;j++){
        k--;
        cout <<k<<" ";
    }
    cout<<"\n";

    for(int i=1;i<=add;i++)
        cout <<"1 0 ";
    for(int i=1;i<=(n-(add*2));i++)
        cout << i <<" ";

    cout <<"\n";

    }
    return 0;
}
