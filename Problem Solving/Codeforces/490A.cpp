#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n+1],a[n],b[n],c[n],j=0,k=0,l=0;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        if(arr[i]==1){
            a[j]=i;
            j++;
        }
        else if(arr[i]==2){
            b[k]=i;
            k++;
        }
        else{
            c[l]=i;
            l++;
        }
    }

    int team=min(j,min(k,l));
    cout << team << endl;
    j=0;
    for(int i=0;i<team;i++){
     cout <<a[j]<<" "<<b[j]<<" "<<c[j]<<endl;
     j++;
    }


    return 0;
}
