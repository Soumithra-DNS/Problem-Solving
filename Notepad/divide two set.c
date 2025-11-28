#include<stdio.h>
int main()
{
    int numbers[11],setone[10],settwo[10],temp1[5],j,temp,i=0,sum1=0,sum2=0,z,k,x;
    FILE *fp1;
    fp1=freopen("vb.txt","r",stdin);
    while(1)
    {
        scanf("%d",&numbers[i]);
        i++;
        if(feof(fp1))
            break;

    }
    for(k=0;k<i;k++){
        for(j=k;j<i;j++){
                if(numbers[k]>numbers[j]){
                temp=numbers[k];
                numbers[k]=numbers[j];
                numbers[j]=temp;
                }
            }
        }

    setone[0]=numbers[0];
    settwo[0]=numbers[1];


    sum1=sum1+numbers[0];
    sum2=sum2+numbers[1];

    x=1;

    for(k=2;k<i;k=k+2){
       temp1[0]=sum1+numbers[k];
       temp1[1]=sum1+numbers[k+1];
       temp1[2]=sum2+numbers[k];
       temp1[3]=sum2+numbers[k+1];

       if(temp1[0]>temp1[1]){
        z=temp1[0];
        temp1[0]=temp1[1];
        temp1[1]=z;
       }
       if(temp1[2]>temp1[3]){
        z=temp1[2];
        temp1[2]=temp1[3];
        temp1[3]=z;
       }

        setone[x]=temp1[1]-sum1;
        settwo[x]=temp1[2]-sum2;
        x++;

        sum1=temp1[1];
        sum2=temp1[2];

    }
    for(k=0;k<i/2;k++){
        printf("%d  ",setone[k]);
    }
    printf("\n");
    for(k=0;k<i/2;k++){
        printf("%d  ",settwo[k]);
    }

    return 0;

}

