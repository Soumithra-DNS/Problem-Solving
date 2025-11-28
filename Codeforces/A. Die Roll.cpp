#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int max,z;
    if(a<b)
        max=b;
    else
        max=a;
     z=7-max;

     if(z==1)
        cout <<"1/6"<<endl;
    else if(z==2)
        cout <<"1/3"<< endl;
    else if(z==3)
        cout<<"1/2"<<endl;
    else if(z==4)
        cout << "2/3"<<endl;
    else if(z==5)
        cout<<"5/6"<< endl;
    else if(z==6)
        cout <<"1/1"<<endl;


    return 0;
}
