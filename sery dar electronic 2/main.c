#include <stdio.h>
#include <stdlib.h>

int n,i,k=1;
float a=3,b=0,sum=0,c;
int main()
{
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
          a=a+1;
          b=b+3;
          //printf("%f\n",a);
          //printf("%f\n",b);
          c=a/b;
          c=c*k;
          k=-1*k;
          //printf("%f\n",c);
          sum=sum+c;

    }
    printf("%f\n",sum);
    return 0;
}
