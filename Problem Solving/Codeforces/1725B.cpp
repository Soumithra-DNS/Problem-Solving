#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, D; cin >> N >> D;
    int arr[N];
    for(int i=0;i<N;i++) cin >> arr[i];
    sort(arr,arr+N);

    int j=-1,win=0,player_pow=0,t_pow=0;
    for(int i=N-1;i>j;i--){
        if(player_pow==0){
            player_pow=arr[i];
            t_pow+=player_pow;
            if(t_pow>D){
                    win++;
                    player_pow=0;
                    t_pow=0;
            }else{
                while(j+1<i){
                    j++;
                    t_pow+=player_pow;
                    if(t_pow>D){
                        win++;
                        player_pow=0;
                        t_pow=0;
                        break;
                    }
                }
            }
        }
    }
    cout<< win <<endl;

    return 0;
}

/*
6 180
50 60 70 80 90 100

2 4
1 2

8 4
1 2 2 3 3 7 8 9
*/
