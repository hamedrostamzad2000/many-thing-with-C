/*#include <stdio.h>
#include <stdlib.h>             raveshe aval va kheily sakht
int b;                          ke dar narmafzare bod.
int string_ln(char*);
void main()
{
    char name[50];
    printf("Enter your name : ");
    gets(name);
    //scanf("%s" , name);

          /*b=string_ln(name);

          printf("%d",b);

}




          int string_ln(char*p)
          {

                    int count=0;
                    while(*p!='\0'){
                              count++;
                              p++;
                    }
                return count;
          }
    //return 0;*/













    /*#include <stdio.h>             //ravesh dovom va kheily ham sade
    #include <stdlib.h>

    char name[50];



    int main(){

    printf("ENTER YOUR NAME:");
    scanf("%s",&name);
    int i=0;
    for(i=0;i<50;i++){
          if(name[i]=='\0'){
                    break;
          }
    }

    printf("%d",i);

    for(int j=i;j>=0;j--){
          printf("%c",name[j]);
    }


return 0;
    }*/






    #include <stdio.h>             //in hamon raveshe dovome ke mikhastam khodam bezanam
    #include <stdlib.h>

    int i,j,k,c;
    char b[50];

    int main(){

    printf("ENTER YOUR NAME:\n");
    scanf("%s",&b);

    j=0;
    for(j=0;j<=50;j++){
          if(b[j]=='\0'){
                    break;
          }
         else{c=j;}
    }
//printf("%d",j);
    for(k=c;k>=0;k--){
         printf("%c",b[k]);

    }
return 0;
    }











