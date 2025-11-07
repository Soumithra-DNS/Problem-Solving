#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int Chest=0,Biceps=0,Back=0,a;
    for(int i=0;i<n;i++){
        cin >> a;
        if(i%3==0)
            Chest+=a;
        else if(i%3==1)
            Biceps+=a;
        else
            Back+=a;
    }

    if(Chest>=Biceps && Chest>=Back)
        cout <<"chest"<<endl;
    else if(Biceps>=Chest && Biceps>=Back)
        cout << "biceps"<<endl;
    else
        cout << "back"<<endl;


    return 0;
}
