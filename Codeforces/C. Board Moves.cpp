#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int n, step=0;
        cin >> n;
        if(n==1)
            cout <<"0" << endl;
        else {
            int j=1;

            for(int i=3;i<=n;i+=2){
            step=step+(((2*i)+2*(i-2))*j);
            j++;
        }

        cout << step << endl;
        step =0;

        }
    }


    return 0;
}

