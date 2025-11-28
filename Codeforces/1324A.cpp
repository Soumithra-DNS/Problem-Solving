#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n],zero=0,one=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];

            if(arr[i]%2==0)
                zero++;
            else
                one++;
        }

        if(zero && one)
            cout << "NO" <<endl;
        else
            cout << "YES" <<endl;
    }

    return 0;
}
