#include <stdio.h>
#include <stdlib.h>

int n,k=-1,i;
float c,sum=0,a=1,b=1;
int main()
{
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
          a=a+4;
          b=b*3;
          c=a/b;
          c=c*k;
          k=-1*k;
          sum=sum+c;
    }
    printf("%f",sum+1);  //chon khod yek dar halghe for ga nemigire
    return 0;
}
