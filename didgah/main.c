#include <stdio.h>
#include <stdlib.h>

long long int f (int  , int  ) ;
int main()
{
    int i , j ;
    printf ("Enter a Number :");
    scanf ("%d",&j);

    printf ("\nEnter a Number :");
    scanf ("%d",&i);

    printf ("\n\nTavan = %d ", f ( j , i));
    return 0;
}

 long long int f (int a , int b ) {

 if (b==0) return 1;
 if (b==1) return a;

 return a*f(a,b-1);  // 2^3 = 2 * 2^2 = 2 * ( 2 * 2^1 )
                     // 2 * f(2,2)
                     // 2 *    2   * f (2,1)
                     // 2 *    2   *     2  * f ( 2 , 0 )
                     // 2 *    2   *     2  *       1
 }
