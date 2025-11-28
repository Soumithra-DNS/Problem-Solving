#include<stdio.h>

int main()
{
    int n;
    float juice=0;

    scanf("%d",&n);
    int array[n];

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        juice = juice+array[i];
    }

    juice=juice/n;

    printf("%f",juice);

    return 0;

}
