#include <stdio.h>
#include <stdlib.h>

int n,i,k,a,sum=0;
int main()
{
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
                    sum=0;
          for(k=1;k<=i;k++){
                    a=i%k;
                    if(a==0){
                              sum=sum+k;
                    }
          }
    printf("%d\n",sum);
    }
    return 0;
}
