#include <stdio.h>
#include <stdlib.h>
int m,n,i=0;
int main()
{
    int counter = 0 , b[10000] ;
    printf("Enter one number\n");
    scanf("%d",&m);

    printf("Enter one number\n");
    scanf("%d",&n);
    for(int k=1;k<=m;k++){
          if(m%k==0 && n%k==0){
          printf("%d\t",k);
          b[counter] = k ;
          //counter++;
          } }

          printf ("\n\n%d",b[0]);

          /*
    int max = b[0];
    for ( int u=1 ; u < counter ; u ++){
    if (b[u]> max) { max = b[u]; } }

    printf("\n\n%d\n",max);
    */
    return 0;
}
