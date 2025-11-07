#include<stdio.h>
void f1(int a,int b){
    printf("a+b=%d\n",a+b);
}
void f2(int x){
    return5*x;
}
void f3(int a,int b){
    a=a+5;
    b=b*6;
    printf("a+b=%d\n",a+b);
}
void main(){
    int a,b=12;
    f1(a,b);
    printf("a=%d,b=%d\n",a,b);
    b=f2(a);
    printf("a=%d,b=%d\n",a,b);
    f3(a,b);
    printf("a=%d,b=%d\n",a,b);
}
