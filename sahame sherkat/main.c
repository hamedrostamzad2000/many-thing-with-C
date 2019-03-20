#include <stdio.h>
#include <stdlib.h>
char ch;
float a,n,b;
int main()
{

    printf("A = 4250 $\nB = 2267 $\nC = 590 $\nD = 110 $\n\n\n");
    printf("CHOOSE?\n");
    scanf("%c",&ch);
    printf("ENTER AMOUNT OF YOUR MONEY:\n");
    scanf("%f",&n);
    a=n*0.0167;
    b=n-a;


    switch (ch){
    case 'a':
    case 'A':
    printf("%f",b/4250);

    break;

    case 'b':
    case 'B':
    printf("%f",b/2267);

    break;

    case 'c':
    case 'C':
    printf("%f",b/590);

    break;

    case 'd':
    case 'D':
    printf("%f",b/110);

    break;


    }

    return 0;
}
