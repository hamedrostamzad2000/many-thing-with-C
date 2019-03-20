#include <stdio.h>
#include <stdlib.h>

int m,n,i,counter=0,b[1000];
int main()
{
          printf("Enter a number\n");
          scanf("%d",&m);
          printf("Enter another number\n");
          scanf("%d",&n);
          for(int i=1;i<=m*n;i++){
                    if(i%m==0 && i%n==0){
                              b[counter]=i;
                              counter++;
                    }
          }
    printf("%d\n",b[0]);
    return 0;
}
