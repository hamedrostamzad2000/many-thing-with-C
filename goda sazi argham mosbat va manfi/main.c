#include <stdio.h>
#include <stdlib.h>

int a,i,b[10];
float c;
int main()
{
    printf("ENTER A NUMBER:\n");
    scanf("%f",&c);        //float(masalan 54.2) ra ba c begir va
                           //beriz toye a (chon a int hast) 54 ra migirad
    a=c;                   //on vaght 54.2!=54

   if(a!=c){printf("DANGER\n PLEASE RUN AGAIN AND ENTER INTEGER NUMBER");}

   if(a==c){

    if(a<0){
          a=-a;
          while(a>=1){
                    printf("%d\n",a%10);
                    a=a/10;
          }
    }

    else{
                    while(a>=1){
                    b[i]=a%10;
                    i++;
                    a=a/10;
          }
          for(int j=i-1;j>=0;j--){
                    printf("%d\n",b[j]);
          }
    }

   }



    return 0;
}
