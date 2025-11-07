#include<stdio.h>
void tax(float salary,float a)
{
    float tax;
    tax=salary*a;
    printf("Tax:%f",tax);
}
int main()
{
float salary,a;
scanf("%f",&salary);
if(salary<3000)
{
   a=0;
}
else if(salary>=3000 && salary<4000)
{
    a=0.10;
}
else if(salary>=4000 && salary<5000)
{
    a=0.12;
}
else if(salary>=5000 && salary<6000)
{
    a=0.14;
}
else if(salary>=6000 && salary<8000)
{
    a=0.16;
}
else if(salary>=8000 && salary<9000)
{
    a=0.18;
}
else if(salary>=9000)
{
    a=0.20;
}
tax(salary,a);
}
