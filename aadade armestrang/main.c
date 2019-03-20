#include <stdio.h>
#include <stdlib.h>

int n,m,i,a,b,c,temp,sum=0,d,e,f;
int main()
{
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    printf("ENTER ANOTHER NUMBER:\n");
    scanf("%d",&m);
    if(n>m){
          temp=n;
          n=m;
          m=temp;
    }

    for(i=n;i<=m;i++){
                    sum=0;
          a=i%10;
          b=(i/10)%10;
          c=(i/100)%10;
          d=a*a*a;
          e=b*b*b;
          f=c*c*c;
          sum=d+e+f;
          if(sum==i){
                    printf("%d\n",sum);
          }
    }



    return 0;
}
