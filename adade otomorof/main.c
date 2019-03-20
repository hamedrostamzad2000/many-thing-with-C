#include <stdio.h>
#include <stdlib.h>

int n,m,temp,i,a,b,c,d,e;
int main()
{
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    printf("ENTER ANOTHER NUMBER\n");
    scanf("%d",&m);
    if(n>m){
          temp=n;
          n=m;
          m=temp;
    }
    for(i=n;i<=m;i++){
          b=i%10;
          c=(i/10)%10;
          a=i*i;
          d=a%10;
          e=(a/10)%10;
          if(b==d && c==e){
          printf("ADADE OTOMOROF:\n");          printf("%d\n",i);
          }
    }
    return 0;
}
