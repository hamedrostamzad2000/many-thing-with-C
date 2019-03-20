#include <stdio.h>
#include <stdlib.h>
int a,b,c;
char ch[2];
int main()
{
    printf("ENTER AN OCLOCK:\n");
    scanf("%d",&a);
    printf("ENTER ITS FORMAT :\n");
    scanf("%d",&c);
    printf("GO TO FORMAT :\n");
    scanf("%d",&b);

    if(b==12){
                    if(a==12){printf("12\n");}
          else {printf("%d",a%12);}
    }
    else if(b==24){
     printf("CHOOSE ONE OF THEM:   AM  OR  PM\n");
     scanf("%s",&ch);
          if(ch[0]=='a' || ch[0]=='A'){
               printf("%d",a);
          }else if(ch[0]=='p' || ch[0]=='P'){
          printf("%d",a+12);
          }else{printf("IT IS INVALUED\n");}
    }else{printf("IT IS INVALUED\n");}

    return 0;
}
