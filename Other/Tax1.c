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
        printf("Tax:%f",salary*0.10);
    }
    else if(salary>=4000 && salary<5000)
    {
        printf("Tax:%f",salary*0.12);
    }
    else if(salary>=5000 && salary<6000)
    {
        printf("Tax:%f",salary*0.14);
    }
    else if(salary>=6000 && salary<8000)
    {
        printf("Tax:%f",salary*0.16);
    }
    else if(salary>=8000 && salary<9000)
    {
        printf("Tax:%f",salary*0.18);
    }
    else
    {

        printf("Tax:%f",salary*0.10);
    }
}
