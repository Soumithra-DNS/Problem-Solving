#include <iostream>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--){
    int n;
    cin >> n;
    int arr[n];
    int i=n,cou=0,step;

    while(i--){
        cin >> arr[i];
        if(arr[i]==1)
            cou++;
    }
    step=(cou/2)+(cou%2)+(n-cou);
    cout << step << endl;

   }


  return 0;
}
