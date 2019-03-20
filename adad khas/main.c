#include <stdio.h>
#include <stdlib.h>

int n,m,temp,i,b,c,d,e,sum;
int main()
{
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    printf("ENTER ANOTHER NUMBER:\n");
    scanf("%d",&m);
    if(n>m){
          temp = n;
          n=m;
          m=temp;
    }
    for(i=n;i<=m;i++){
          b=i/10;
          c=i%10;
          d=b+c;
          e=b*c;
          sum=d+e;
          if(sum==i){printf("%d\n",i);
          }
    }
    return 0;
}
