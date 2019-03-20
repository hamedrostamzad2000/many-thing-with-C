#include <stdio.h>
#include <stdlib.h>
char g[50];
int main()
{
          printf("A OR B?");
          scanf("%s",g);
          if(g[0]=='a'){
    FILE *fp;
    fp=fopen("index.dat","w");
          char name[50];
          int s;
         // char password[50];
printf("enter your name");
scanf("%s",&name);
//scanf("%d",&s);


//printf("enter your password");
//scanf("%s",password);

    //fprintf(fp,"%s", "reza");
    fprintf(fp,"%s", name);
    //fprintf(fp,"%d", s);
    //fprintf(fp,"%s", password);
    fclose(fp);

          }
char ty[50];
int s;
    if(g[0]=='b'){
    FILE *fp;
    fp=fopen("index.dat","r");
    while(!feof(fp)){

          fscanf(fp,"%s",&ty);
         //fscanf(fp,"%d",&s);
         //printf("%d",s);
          printf("%s",ty);
          printf("\n");
          //fscanf(fp,"%s",password);
         // printf("%s",password);
     }
    fclose(fp);
    }
    return 0;
}
