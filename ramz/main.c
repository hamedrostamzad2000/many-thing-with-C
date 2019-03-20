#include <stdio.h>
#include <stdlib.h>

int n,m,tump,i,a1,a2,a3;
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);

    printf("Enter another number\n");
    scanf("%d",&m);
    if(n>m){tump=n;
    n=m;
    m=tump;}


    for(i=n;i<=m;i++){

  //printf("%d",i);

               a1=i%10;
               a2=i/10%10;
               a3=i/100%10;
             printf("%d",(a3+7)%10);
             printf("%d",(a2+7)%10);
             printf("%d",(a1+7)%10);





     }


    return 0;
}
