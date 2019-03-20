#include <stdio.h>
#include <stdlib.h>
char ch[50];
int n,i,j;
float a,sum,b[100];
int main()
{
    printf("YOUR NAME:\n");
    scanf("%s",&ch);
    printf("SHOMARE DANESHGOYY:\n");
    scanf("%d",&n);
    printf("NOMARAT KHOD RA VARED KONID:\n");
    do{
          scanf("%f",&a);
          b[i]=a;
          i++;
    }while(a!=0);
    for(j=0;j<=i;j++){
          sum=sum+b[j];


    }
    printf("MR|MS\t ");
    printf("%s\t\a",ch);
    printf("BA SHOMARE DANESHJOYY:\t ");
    printf("%d\n",n);
    printf("MIANGINE SHOMA:\n");
    printf("%f",sum/(i-1));
    return 0;
}
