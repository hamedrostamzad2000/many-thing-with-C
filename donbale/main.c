#include <stdio.h>
#include <stdlib.h>
int a=1,c=4,i,b,d,n,k=1;
float sum=0,e;
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
          b=2*a;
          //printf("%d\t",b);
          a=b;
          d=c+1;
          //printf("%d\t",d);
          c=d;
          float e;
          e=((float)b/d)*k;
          k=-k;
          //printf("\n%f",e);

          sum = sum + e;


    }
    printf("\n %f", sum);
    return 0;
}
