#include <stdio.h>
#include <stdlib.h>
int n,a,b[1000],i=0,j,sum=0,k;
int main()
{
    printf("Enter your number\n");
    scanf("%d",&n);
    for(a=2;a<=n;a++){
          b[i]=a;
          i++;

    }
    for(j=0;j<=i;j++){
                    k=1;
                    sum=0;
          for(k=1;k<b[j];k++){
                    if(b[j]%k==0){
                              sum=sum+k;
                    }
          }
        if(sum==b[j] && sum !=0){printf("%d\n\a",sum);         }
    }


        return 0;
}
