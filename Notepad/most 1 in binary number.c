/*Input number from notepad,then number convert decimal to binary,
then search which number contain most 1*/

#include<stdio.h>
int main()
{
    int a[5],b[10],j,y=0,i=0,count=0,z,x;
    FILE *fp1;
    fp1=freopen("num.txt","r",stdin);
    while(1)
    {

        scanf("%d",&a[i]);
        z=a[i];
        int k=0-----;

        while(z!=0)
        {
            b[k]=z%2;
            z=z/2;
            k++;
        }

        for(j=0;j<k;j++){
            if(b[j]==1)
                count++;
        }

        if(count>y){
            y=count;
            x=a[i];
        }

        if(feof(fp1))
            break;

        i++;
        count=0;

    }
    fclose(fp1);

    printf("%d contain most 1",x);


    return 0;
}
