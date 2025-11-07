#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char str[n+1];
       // cin >> str;
        cin.get(str, 50);
        for(int i=0;str[i]!='\0';i++){
            if(str[i]=='U'){
                str[i]='D';
            }
            else if(str[i]=='D'){
                str[i]='U';
            }
        }

        str[n]='\0';

        cout << str<< endl;

    }

    return 0;
}
