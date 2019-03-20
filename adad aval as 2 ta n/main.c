#include <stdio.h>
#include <stdlib.h>
int n,s=0;

int main()
{
    printf("Enter your number\n");
    scanf("%d",&n);
    for(int j =2;j<=n;j++){
                    s=0;
          for(int k=2;k<j-1;k++){
                    if(j%k==0){
                              s+=1;
                    }}
                    if(s==0){printf("%d\t",j);printf("aval ast\n\n");}
                    else{printf("%d\t",j); printf("morakab ast\n\n");}


    }
    return 0;
}
