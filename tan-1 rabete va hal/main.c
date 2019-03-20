#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,z,k=1,l=1,h=1;
int i;
int main()
{
    scanf("%f",&a);
    z=atan(a);
//printf("%f",z);
    for(i=1;i<=a;i++){
          k=z*k;
    }


    for(i=1;i<=a;i++){
          l=2*l;
    }



    for(i=1;i<=a;i++){
          h=i*h;
    }

    printf("%f",(k+l)/h);



    return 0;
}
