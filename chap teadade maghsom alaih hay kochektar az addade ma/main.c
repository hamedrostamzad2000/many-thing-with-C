#include <stdio.h>
#include <stdlib.h>

int n,i,k,s=0;
int main()
{
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
                    s=0;
          for(k=1;k<=i;k++){
                    if(i%k==0){
                              s+=1;
                    }
          }
      printf("%d\n",i);
      printf("%d\n",s);
    if(s==2){printf("aval\n");}
    if(s!=2){printf("morakab\n");}
    }
    return 0;
}
