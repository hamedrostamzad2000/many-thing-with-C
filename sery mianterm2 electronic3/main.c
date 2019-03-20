#include <stdio.h>
#include <stdlib.h>

int n,i,k=1;
float a=1,b=0,c,sum=0;
int main()
{
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
          a=a*2;
          b=b+1;
          c=a/b;
          c=c*k;
          k=-1*k;
          sum=sum+c;
    }
    printf("%f\n",sum);
    return 0;
}
