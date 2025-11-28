#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int row=0;row<=n;row++){
       for(int col=0;col<n-row;col++)
        cout << "  ";

       for(int col=0;col<=row;col++)
        cout << col<<" ";

       for(int col=row-1;col>=0;col--)
        cout << col<<" ";

       cout << endl;
    }

    for(int row=n-1;row>=0;row--){
       for(int col=0;col<n-row;col++)
        cout <<"  ";

       for(int col=0;col<=row;col++)
        cout << col<<" ";

       for(int col=row-1;col>=0;col--)
        cout << col<<" ";

       cout << endl;
    }


    return 0;
}
