#include <stdio.h>
#include <stdlib.h>
char name[50];
int main()
{
   FILE *fp;
   fp=fopen("hamed.txt","w");
   //fprintf(fp,"%s","ali");
   scanf("%s",&name);
   fprintf(fp,"%s",name);
   fp=fopen("hamed.txt","r");
   while(!feof(fp)){
          fp=fopen("hamed.txt","r");
          fscanf(fp,"%s\n","name");
   }
   printf("%s",name);

   fclose(fp);
    return 0;
}
