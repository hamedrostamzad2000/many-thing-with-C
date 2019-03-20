#include <stdio.h>
#include <stdlib.h>

int m,n,i=0,b[10],a,j;
int main()
{
    printf("Enter a number\n");
    scanf("%d",&m);

    printf("Enter another number\n");
    scanf("%d",&n);

    while (m/n>=1){
          //printf("%d",m/n);
          b[i]=m%n;
          i++;
           //printf("%d",m%n);
          m=m/n;
}

    a=m;
    printf("%d",a);
    for(j=i-1;j>=0;j--){
          printf("%d",b[j]);
    }

    return 0;
}
