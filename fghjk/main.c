#include <stdio.h>
#include <stdlib.h>
char a,ch;
char b[20];
int s,k,g;
int main()
{
//scanf("%c",&ch);
//if(ch=='a'){






    FILE *fp;
    fp=fopen("index.dat","w");
          char name[50];
          int s,k,g;
         // char password[50];
printf("enter your name");
scanf("%d",&s);

//printf("enter your password");
//scanf("%s",password);

    //fprintf(fp,"%s", "reza");
    fprintf(fp,"%d", s);
    //fprintf(fp,"%s", password);


    //printf("ENTER A NUMBER:\n");
    //scanf("%d",&k);
//fclose(fp);

//}




//if(ch=='q'){
//int g;
//int s;
//FILE *fp;
    fp=fopen("index.dat","r");
    while(!feof(fp)){

          fscanf(fp,"%d",&s);
          printf("%d",s);

          //if(s)


          printf("\n");
          //fscanf(fp,"%s",password);
         // printf("%s",password);
     }
    fclose(fp);
//}




    return 0;
}
