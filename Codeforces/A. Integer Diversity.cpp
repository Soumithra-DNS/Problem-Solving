#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];

        sort(arr ,arr+n);
        int diff=0,cou=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(arr[i]==arr[j]){
                    cou++;
                }
                else{
                    diff++;
                    if(cou>1){
                        diff++;
                    }
                    cout <<"i="<<cou;
                    cou=0;
                    i=j-1;
                    break;
                }
            }
        }

        cout << diff << endl;


    }

    return 0;
}
