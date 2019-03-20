#include <stdio.h>
#include <stdlib.h>
int a,f=1;
int main()
{
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("factoriel :");
    for(int i=2;i<=a;i++){
          f=f*i;

    }
    printf("%d",f);
    return 0;
}






