#include <stdio.h>
#include <stdlib.h>
char ch;
int n,a,b,c;
float sum;
int main()
{
    printf("A.ash = 30\nB.halim = 35\nC.coco = 40\nn.NO = no food\nE.Enter A NEW FOOD\n");
    FILE *fp;
    fp=fopen("index.txt","w");
    char name[50];
    //fprintf(fp,"%s",name);


    while(ch!='n' || ch!='N'){
    printf("WHAT DO YOU WANT TO EAT?\n");
    scanf("%c",&ch);

    if(ch=='E' || ch=='e'){
          //printf("ENTER YOUR FOOD:\n");
          //scanf("%s",&name);
          fprintf(fp,"%s","reza" );
          //fscanf(fp,"%s",name);
    }
    if(ch == 'a' || ch=='A'){
          printf("HOW MANY?\n");
          scanf("%d",&n);
          a=n*30;
    }
    if(ch == 'b' || ch=='B'){
          printf("HOW MANY?\n");
          scanf("%d",&n);
          b=n*35;
    }
    if(ch == 'c' || ch=='C'){
          printf("HOW MANY?\n");
          scanf("%d",&n);
          c=n*40;
    }

    }
    sum = a+b+c;

    if(sum>=100 && sum<200){sum=sum-sum/10; printf("HAZINE ERSAL DARYAFT NEMISHAVAD.PAS HAZINE SHOMA BA 10 % TAKHFIF MISHAVAD:\n");}    //sum>=100  bayad balatar neveshteh beshavad
    if(sum>=200){sum=sum-sum*0.2; printf("HAZINE ERSAL DARYAFT NEMISHAVAD.PAS HAZINE SHOMA BA 20 % TAKHFIF MISHAVAD:\n");}
    if(sum<100){sum=sum+10;printf("BA 10 $ HAZINE ERSAL HAZINE SHOMA MISHAVAD:");   }                         //bekhater mesale 3 ta ash ba hazine ersal
    printf("%f",sum);
    fclose(fp);
    return 0;
}
