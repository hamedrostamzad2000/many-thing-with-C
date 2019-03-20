#include <stdio.h>
#include <stdlib.h>

int main()
{
          int a,b[50],i=0,j;
          char o;
    printf("ENTER A NUMBER:\n");
    scanf("%d",&a);

    while(a>0){

          b[i]=a%10;
          i++;
          a=a/10;
    }

      for(j=0;j<i;j++){
          printf("%d\a",b[j]);

      }



    return 0;
}
