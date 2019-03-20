/*#include <stdio.h>
#include <stdlib.h>



int main()
{

          int *d1;


    d1=(int*)malloc(sizeof(int));
    scanf("%d",d1);
    printf("%d",d1);
    return 0;
}*/



























#include <stdio.h>
#include <stdlib.h>

int main () {
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "tutorialspoint");
   printf("String = %s,  Address = %u\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u\n", str, str);

   free(str);

   return(0);
}
