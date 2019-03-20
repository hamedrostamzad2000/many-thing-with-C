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
  max= b[0];
  for(int u=1;u<i;u++){

          if(b[u]>max){max=b[u];}
  }
  printf("max = %d\n",max);

  min = b[0];
  for(int j=1;j<i;j++){
          if( b[j]<min){min=b[j];}
  }
  printf("min = %d\n",min);
  //int s;
  //s=0;
  //s= s+min;
  //printf("%d",s);
  int temp;
  for(int j=0 ;j<n; j++)
          for(int i=0; i<n-1; i++)
          if(b[i]>b[i+1]){
                    temp=b[i];
                    b[i] = b[i+1];
                    b[i+1] = temp;
          }
          printf("\n");

   for(int i=0; i<n; i++)
          printf("%d  " ,b[i]);



    return 0;
}

/*
    1   7    9   3   4
    1   7    9   3   3
    1   7    3   9   4
    1   7    3   4   9

    1   7    3   4
    1   3    7   4
    1   3    4   7

    1   3    4

    1   3

    bubble sort  */
