#include<stdio.h>
int main()
{
    float salary,tax;
    printf("Enter salary: ");
    scanf("%f",&salary);
    if(salary<3000)
    {
        printf("No Tax");
    }
    else if(salary>=3000 && salary<4000)
    {
        tax=salary*0.10;
        printf("Tax:%f",tax);
    }
    else if(salary>=4000 && salary<5000)
    {
        tax=salary*0.12;
        printf("Tax:%f",tax);
    }
    else if(salary>=5000 && salary<6000)
    {
        tax=salary*0.14;
        printf("Tax:%f",tax);
    }
    else if(salary>=6000 && salary<8000)
    {
        tax=salary*0.16;
        printf("Tax:%f",tax);
    }
    else if(salary>=8000 && salary<9000)
    {
        tax=salary*0.18;
        printf("Tax:%f",tax);
    }
    else
    {
        tax=salary*0.2;
        printf("Tax:%f",tax);
    }
}
