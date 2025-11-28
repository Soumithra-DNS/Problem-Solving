#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string str1[5];
    for(int i=0;i<5;i++)
        cin >> str1[i];
    int z=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            if(str1[i][j]==str[0] || str1[i][j]==str[1]){
                z=1;
                break;
            }
        }
    }
    if(z==0)
        cout <<"NO"<<endl;
    else
        cout << "YES"<<endl;


    return 0;
}
