#include<stdio.h>
int main()
{
    int n, k, time,count=0, contest_time=0;
    scanf("%d %d",&n,&k);
    time=240-k;
    for(int i=5;i<46;i=i+5){
        contest_time=contest_time+i;
        if(contest_time<=time){
            count++;
        }
        else
            break;

        if(count==n)
            break;
    }
    printf("%d",count);


    return 0;
}
