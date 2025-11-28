#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
      int s;
      cin >> s;
      int sum=1,count=0;
      for(int i=3;sum<s;i+=2) {
        count++;
        sum+=i;
      }
      cout << count+1 << endl;

    }

    return 0;
}
