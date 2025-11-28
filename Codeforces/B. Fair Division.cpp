#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n],count2=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==2)
                count2++;
        }
        if(count2%2==0){
            if((n-count2)%2==0)
                cout << "YES" << endl;
            else
                cout << "NO"<< endl;
        }
        else{
            if((n-count2-2)%2==0 && ((n-count2-2)>=0))
                cout << "YES" << endl;
            else
                cout << "NO"<< endl;
        }



    }

    return 0;
}
