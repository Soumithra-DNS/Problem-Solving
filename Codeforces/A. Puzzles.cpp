#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, z=0;
    cin >> n >> m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin >> arr[i];
    }
    sort(arr, arr + m);

    z=arr[n-1]-arr[0];

    for(int i=1;i+n-1<m;i++){
        if((arr[i+n-1]-arr[i])<z){
            z=(arr[i+n-1]-arr[i]);

        }
    }

    cout << z << endl;

    return 0;
}
