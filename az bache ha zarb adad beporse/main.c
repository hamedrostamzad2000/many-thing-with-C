#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int z,x,y,a,i,s;

int main()
{
    for(i=0;i<=9;i++){
          srand(time(0));
          z=rand()%11;
          y=rand()%11;
          printf("HASEL RA BEGO\n");
          printf("%d * %d = ",z,y);
          //x=z*y
          scanf("%d",&a);
          if(a==z*y){
                    printf("AFARIN\n");
                    s+=2;

          }
          else{
                    printf("ESHTEBAH BOD\n");
          }
    }

    printf("EMTEHAN TAMAM SHOD \nNOMREYE SHOMA= %d",s);
    if(s>=18){
          printf("SAD AFARIN\n\a");
    }

    return 0;
}
