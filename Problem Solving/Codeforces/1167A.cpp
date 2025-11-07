#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char str[n+1];
        cin >> str;
        n=n-10;
        int z=0;
        for(int i=0;i<n;i++){
            if(str[i]=='8'){
                z=1;
                break;
            }
        }
        if(z==0)
            cout << "NO"<<endl;
        else
            cout << "YES"<< endl;
    }

    return 0;
}
