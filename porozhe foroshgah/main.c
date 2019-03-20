#include <stdio.h>
#include <stdlib.h>
char ch;
int main()
{
    printf("SARASHPAZ YA MOSHTARY?\n");
    scanf("%c",&ch);
    if(ch=='s'){

           //FILE *fp;
          //fp=fopen("index.dat","w");
            char gh;
            char username[20];
            int password;

          printf("SABTENAM\nVOROD");
          scanf("%c",&gh);
          if(gh=='s'){
                    printf("ENTER USERNAME:");
                    scanf("%S",&username);
                    //fprintf(fp,"%s",username);
                    printf("ENTER PASSWORD:");
                    scanf("%d",&password);
                    //fprintf(fp,"%d",password);
          }
//fclose(fp);
    }



    return 0;
}
