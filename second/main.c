#include <stdio.h>

int main()
{
 int a,b;
 printf("enter a number:\n");
 scanf("%d",&a);
 printf("enter another number:\n");
 scanf("%d",&b);
 int c = a+b;
 printf("\n%d+%d=%d\a\n",a,b,c);
 int d = a*b;
 printf("\n%d*%d=%d\a\n",a,b,d);

 printf("\n%d mod %d =%d\n",a,b,a%b);
 printf("\n%d mod %d =%d\n",b,a,b%a);
 printf("\n%d t %d =%d\n",a,b,a/b);
 printf("\n%d t %d = %d\n",b,a,b/a);
 printf("\n(%d t %d)+%d = %d\n",a,b,a,(a/b)+a);
}
