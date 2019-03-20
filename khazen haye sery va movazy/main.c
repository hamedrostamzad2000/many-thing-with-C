#include <stdio.h>
#include <stdlib.h>

int a,i,j;
float b[50],c,s=0,k;
char ch[10];


int main()
{
    printf("ENTER THE NUMBER OF KHAZEN HA:\n");
    scanf("%d",&a);
    printf("ENTER POWERS OF %d KHAZEN:\n",a);
    for(i=1;i<=a;i++){
          printf("%d_",i);
          scanf("%f",&c);
          b[j]=c;
          j++;
    }

    printf("SERY OR MOVAZY:\n");
    scanf("%s",&ch);

    if(ch[0]=='s' || ch[0]=='S'){
          for(i=0;i<j;i++){
                    k= 1/b[i];
                   //printf("%f\n",k);
                   s = k + s;

          }
          printf("AMOUNT OF ALL OF SERY KHAZENS:%f",s);
    }




    if(ch[0]=='m' || ch[0]=='M'){
          for(i=0;i<j;i++){
                    s=b[i]+s;
          }
         printf("AMOUNT OF ALL OF MOVAZI KHAZENS:\n%f",s);
    }





    return 0;
}
