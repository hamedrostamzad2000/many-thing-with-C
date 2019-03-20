#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int z,o;
int main()
{
          srand(time(0));
          for(o=1;o<=32;o++){

    z=rand()%11;
    printf("%d\n",z);

          }

    return 0;
}
