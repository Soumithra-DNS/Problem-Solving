#include<stdio.h>
int main()
{
    int digit;
    printf("Enter a digit: ");
    scanf("%d",&digit);
    switch(digit)
    {
case 1:
    printf("one");
    break;
case 2:
    printf("Two");
    break;
case 3:
    printf("three");
    break;
default:
    printf("Not a vlid digit ");
}
return 0;
}
