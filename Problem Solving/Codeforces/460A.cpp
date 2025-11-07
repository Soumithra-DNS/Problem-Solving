#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, day;
    cin >> n >> m;
    while(n!=0)
    {
        if(n>=m){
            n-=m;
            n++;
            day+=m;
        }
        else{
            day+=n;
            n-=n;
        }
    }
    cout << day << endl;

    return 0;
}
