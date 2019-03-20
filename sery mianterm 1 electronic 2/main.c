#include <stdio.h>
#include <stdlib.h>
int n,i;
float a=1,b=2;
int main()
{
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    printf("%f\n",a/b);
    for(i=1;i<=n;i++){
          a=a+3;
          b=b+3;
          printf("%f\n",a/b);

    }
    return 0;
}
