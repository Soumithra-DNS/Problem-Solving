#include<iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int x, police=0,crime=0;
   for(int i=0;i<n;i++){
    cin >> x;

    if(x>0){
        police+=x;
    }
    else{
        if(police>0){
            police--;
        }
        else
            crime++;
    }
   }
   cout << crime;


    return 0;
}
