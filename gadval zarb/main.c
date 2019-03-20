#include <stdio.h>
#include <stdlib.h>

int n;
int main()
{
    printf("Enter your number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
          for(int j=1;j<=n;j++){
          printf("%d\t",j*i);

          }
printf("\n");
    }
    return 0;
}
