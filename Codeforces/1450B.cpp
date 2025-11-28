#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n][2];
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin >>arr[i][j];
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               long long int x=((arr[i][0]-arr[j][0])*(arr[i][0]-arr[j][0]));
               long long int y=((arr[i][1]-arr[j][1])*(arr[i][1]-arr[j][1]));
                if(sqrt(x+y) <=k) count++;
            }
            if(count==n){
                cout<<"1"<<endl;
                goto end;
            }
            count=0;
        }
        cout << "-1"<< endl;
        end:;
    }
    return 0;
}
