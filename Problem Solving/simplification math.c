#include<stdio.h>
int main()
{
    char str[100];
    int i,j,z,x,y,count=0,m,n;

    scanf("%s",str);

    for(i=0;str[i]!='\0';i++){
        count++;
    }
    while(count>2){
    for(i=0;i<count;i++){
        if(str[i]==47){
          z=(((str[i-2]-48)*10 + (str[i-1]-48)) / ((str[i+1]-48)*10 + (str[i+2]-48)));
          x=z/10;
          y=z%10;
          str[i-2]=x+48;
          str[i-1]=y+48;
          count=count-3;

          for(j=i;str[j+3]!='\0';j++){
                str[j]=str[j+3];
          }
          str[count]='\0';
          i=i-2;
        }
    }

    for(i=0;i<count;i++){
        if(str[i]==42){
          z=(((str[i-2]-48)*10 + (str[i-1]-48)) * ((str[i+1]-48)*10 + (str[i+2]-48)));
          x=z/10;
          y=z%10;
          str[i-2]=x+48;
          str[i-1]=y+48;
          count=count-3;

          for(j=i;str[j+3]!='\0';j++){
                str[j]=str[j+3];

          }
          str[count]='\0';
          i=i-2;
        }
    }

    for(i=0;i<count;i++){
        if(str[i]==45){
          m=((str[i-2]-48)*10 + (str[i-1]-48));
          n=((str[i+1]-48)*10 + (str[i+2]-48));
          if(m<n){
            z=n-m;
            str[i-3]=45;
          }
          else
            z=(m-n);


          x=z/10;
          y=z%10;
          str[i-2]=x+48;
          str[i-1]=y+48;
          count=count-3;

          for(j=i;str[j+3]!='\0';j++){
             str[j]=str[j+3];
          }
          str[count]='\0';
          i=i-2;
        }
    }
    for(i=0;i<count;i++){
        if(str[i]==43){
          z=(((str[i-2]-48)*10 + (str[i-1]-48)) + ((str[i+1]-48)*10 + (str[i+2]-48)));
          x=z/10;
          y=z%10;
          str[i-2]=x+48;
          str[i-1]=y+48;
          count=count-3;

          for(j=i;str[j+3]!='\0';j++){
                str[j]=str[j+3];

          }
          str[count]='\0';
          i=i-2;
        }
    }

    }

    printf("%c%c\n",str[0],str[1]);
    printf("%s",str);



    return 0;
}
