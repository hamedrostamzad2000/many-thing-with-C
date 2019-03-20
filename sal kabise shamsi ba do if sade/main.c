#include <stdio.h>
#include <stdlib.h>
int n;
int main()
{
    printf("ENTER YOUR YEAR\n");
    scanf("%d",&n);
    if(1244<=n && 1342>=n){
          if(n%33==1 || n%33==5 || n%33==9 || n%33==13 ||
             n%33==17 || n%33==22 || n%33==26 || n%33==30){
                  printf("IT IS KABISE\n");
             }else{printf("KABISE NIST\n");}
    }

    else if(1343<=n && 1472>=n){
          if(n%33==1 || n%33==5 || n%33==9 || n%33==13 ||
             n%33==18 || n%33==22 || n%33==26 || n%33==30){
                  printf("IT IS KABISE\n");
             }else{printf("KABISE NIST\n");}
    }else{printf("IT IS INVALUED\n");}
    return 0;
}
