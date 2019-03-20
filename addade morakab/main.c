#include <stdio.h>
#include <stdlib.h>

int i,n,k,a,s=0;
int main()
{
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(i=4;i<=n;i++){
                    s=0;
          for(k=2;k<i;k++){
                    a=i%k;
                    if(a==0){
                    s=s+1;
                    }
          }
         if(s!=0){
          printf("%d\n",i);
         }


    }
    return 0;
}
