#include <stdio.h>
#include <stdlib.h>
int n,i;
float a=1,sum=0;
int main()
{
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
          a=a*0.5;
          sum=sum+a;

    }
    printf("%f\n",sum);
    return 0;
}
