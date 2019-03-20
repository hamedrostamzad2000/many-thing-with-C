#include <stdio.h>
#include <stdlib.h>

char ch;
int i,a,b,c,d;
int main()
{
    printf("A.dolar\n");
    printf("B.euro\n");
    printf("C.uoan\n");
    printf("D.derham\n");
    printf("enter a unit of money:\n");
    scanf("%c",& ch);
    printf("Enter your money\n");
    scanf("%d",&i);
    if(ch == 'a' || ch == 'A'){
          printf("amount your money:\n");
          printf("%d",i/4203);
          printf("rest of your money:\n");
          printf("%d",i%4203);
    }

    if(ch == 'b' || ch == 'B'){
          printf("amount your money:\n");
          printf("%d",i/5008);
          printf("rest of your money:\n");
          printf("%d",i%5008);
    }

    if(ch == 'c' || ch == 'C'){
          printf("amount your money:\n");
          printf("%d",i/1161);
          printf("rest of your money:\n");
          printf("%d",i%1161);
    }

    if(ch == 'd' || ch == 'D'){
          printf("amount your money:\n");
          printf("%d",i/658);
          printf("rest of your money:\n");
          printf("%d",i%658);
    }
    return 0;
}
