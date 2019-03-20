#include <stdio.h>


int main()
{
    int a, i=0 , s=0 ;
    int b[10000];
    do {
    scanf("%d",&a);
    b[i]= a ;
    i++ ;
    } while (a!= 0 );



     for (int j=0 ; j < i-1 ; j++) {

          int s = 0;

          for ( int k=1 ; k < b[j] ; k++){

          if ( b[j]%k == 0){
          s= s + k ;} }

          if ( s == b[j] ) { printf("%d",b[j]) ;printf(" addad kamel ast\n");}
          else { printf ("%d",b[j]);printf(" addad kamel nist\n");}

          }









    return 0;
}
