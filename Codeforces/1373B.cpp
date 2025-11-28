#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
       char str[105];
       cin >> str;
       int one=0,zero=0,temp;
        for(int i=0;str[i]!='\0';i++){
            if(str[i]=='1')
                one++;
            else
                zero++;
        }
        if(one<zero)
            temp=one;
        else
            temp=zero;

        if(temp%2!=0)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;



    }

    return 0;
}
