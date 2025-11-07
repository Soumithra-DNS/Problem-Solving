#include<stdio.h>
int main()
{
    int a, b, c, n, z = 0, max, i, t;
    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%d %d %d %d", &a, &b, &c, &n);
        max=a;
        if(max < b)
            max = b;
        if(max < c)
            max = c;
        do
        {
            max = max + 1;
            do
            {
                a = a + 1;
                z++;
            }while(a < max);

            do
            {
                b = b + 1;
                z++;
            }while(b < max);

            do
            {
                c = c + 1;
                z++;
            }while(c < max);

        }while(z<n);

        if(z==n)
            printf("YES\n");
        else
            printf("NO\n");
       z=0;
    }
    return 0;
}
