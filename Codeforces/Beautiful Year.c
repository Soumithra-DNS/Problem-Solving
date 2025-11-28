#include<stdio.h>
int main()
{
    int year,digit1,digit2,digit3,digit4;
    scanf("%d",&year);
    while(1)
    {
     year=year+1;
     digit1=year/1000;
     digit2=year/100-digit1*10;
     digit3=year/10-digit2*100;
     digit4=year%10;

     if(digit1!=digit2 && digit1!=digit3 && digit1!=digit4 && digit2!=digit3 && digit2!=digit4 && digit3!=digit4)
      {
        break;
      }

    }

    printf("%d",year);
    return 0;
}
