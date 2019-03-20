#include <stdio.h>
#include <stdlib.h>
int a,b[1000],u,i=0,n,max,min;
int main()
{
          printf("Enter a number\n");
          scanf("%d",&n);
          printf("you can enter");
          printf("%d",n);
          printf("numbers\n");
  while (i<=n-1) {
          scanf("%d",&a);
          b[i]=a;
          i++;
  }
  max = b[0];
  for(int u=1;u<i;u++){
          if(b[u]>max){max=b[u];}
  }
  printf("max = %d\n",max);

  min = b[0];
  for(int j=1;j<i;j++){
          if( b[j]<min){min=b[j];}
  }
  printf("min = %d",min);

    return 0;
}
