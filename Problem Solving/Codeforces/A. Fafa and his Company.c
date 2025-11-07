#include<stdio.h>
int main()
{
    int n, emp, way=0;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        emp =n-i;
        if(emp%i==0){
            way++;
        }
    }
    printf("%d\n",way);


    return 0;
}
