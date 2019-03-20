#include <stdio.h>
#include <stdlib.h>

int i,j,n;
float sum=0,a,f;
int main()
{
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
           f=1;
          for(j=1;j<=i;j++){
           f=f*j;
          }
          a=1/f;

          printf("%f\n",a);
    sum=sum+ a;

    }
    printf("\n%f",sum);
    return 0;
}
