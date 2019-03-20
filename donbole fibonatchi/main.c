/*#include <stdio.h>
#include <stdlib.h>

int b[1000],i=0;
int main()
{
    //for (int a=1;a<=100;a++){
          //b[i] = a;
          //i++;
          //}
          b[0]=1;
          printf("1\t",b[0]);
          b[1]=1;
          printf("%d\t",b[1]);
int z;
    for(i = 0;i<100;i++){
          b[i+2]=b[i]+b[i+1];
          printf("%d\t",b[i+2]);
          b[i]=b[i+1];
          b[i+1]=b[i+2];
          //b[i+2]=z;
          //printf("%d\t",b[i+2]);
    }
          //for(int i=0;i<100;i++){
                    //printf("%d\t",b[i]);
         // }
        return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

int n ;
printf("N ?") ;
scanf("%d",&n);
int a=1;
printf("%d\n",a);
int b=1;
printf("%d\n",b);
int c=0;


// 1  1  2  3  5  8
     for (int i=2;i<=n;i++){

          c=a+b;
          printf("%d\n",c);
          a=b;
          b=c;

}


return 0;
}
