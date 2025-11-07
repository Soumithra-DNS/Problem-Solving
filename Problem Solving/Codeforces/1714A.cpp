#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, h, m;
        cin >> n >> h >> m;
        int h1, m1, x, y,min=1450,temp,z;
        x=h*60 + m;
        for(int i=0;i<n;i++){
            cin >> h1 >> m1;
            y=h1*60+m1;

            if(x<=y){
                y=y-x;
               if(min>y)
                    min=y;
            }
            else{
                y=(y-x)+1440;

               if(min>y){
                min=y;
            }
            }
        }

        cout <<min/60<<" "<<min%60<< endl;
    }

    return 0;
}
