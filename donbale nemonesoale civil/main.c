#include <stdio.h>
#include <stdlib.h>
int a=1,n,i=0,k=1,j;
float sum=0,c,d,b[1000];
int main()
{
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    while(i!=n){
          a=a*2;
          b[i]=a;
          i++;
    }
    for(j=0;j<i;j++){
          //printf("%d",b[j]);
          c=(1/b[j]);
          d=c*k;
          k=-1*k;
          sum=sum+d;

    }

    printf("%f",sum);

    return 0;
}
