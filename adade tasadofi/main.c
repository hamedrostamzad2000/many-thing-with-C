#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
int a,i;
int main()
{
    srand(time(0));
    int z=rand()%11;
    //printf("%d",z);
    while ( i<810){
             printf("Enter a number\n");
             scanf("%d",&a);
             if(z==a){printf("it is true\n");
             break;}
             else{printf("it is false\n");}
          i++;
    }
    if(i=10){printf("\nfinised your chance");}


    return 0;
}
