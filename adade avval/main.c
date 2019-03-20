#include <stdio.h>


int main()
{
    int a,b[1000],i=0,s=0;
    do{
          scanf("%d",&a);
          b[i] = a ;
          i++;
    } while (a!=0) ;


    for(int j =0;j<i-1;j++){
                    s=0;
          for(int k=2;k<b[j];k++){
                  if(b[j]%k==0){
                  s = s + 1;} }

                  if(s==0){printf("%d:",b[j]);
                   printf("aval ast\n");
                   }else {printf("%d:",b[j]);
                   printf("aval nist\n");
                   }
          }







    return 0;
}
