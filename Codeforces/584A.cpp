#include<bits/stdc++.h>
using namespace std;
int main()
{
    int digit, div;
    cin >> digit >> div;
    if(digit==1 && div==10)
        cout <<"-1"<< endl;

    else{
    char str[105];
    if(div==10)
        div=1;

    str[0]=div+48;
    for(int i=1;i<digit;i++){
       str[i]=48;
    }
    str[digit]='\0';
    cout << str;
    }

    return 0;
}
