#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter an upper cases letter: ");
    scanf("%c",&upper);
    lower =tolower(upper);
    printf("%c",lower);
    return 0;

}
