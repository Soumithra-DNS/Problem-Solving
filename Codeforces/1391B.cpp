#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--){
    int r, c;
    cin >> r >> c;
    char str[r+1][c+1];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cin >> str[i][j];
    }

   int count1=0,count2=0;
   for(int i=0;i<r-1;i++){
    if(str[i][c-1]!='D')
        count1++;
   }
   for(int i=0;i<c-1;i++){
    if(str[r-1][i]!='R')
        count2++;
   }
   cout <<count1+count2<< endl;


}
    return 0;
}
