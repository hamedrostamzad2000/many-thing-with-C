#include <stdio.h>
#include <stdlib.h>
int n,a,b,c,i;
char ch,gh,ab;
int main()
{
    printf("ENTER YOUR MONEY IN YOUR ACCOUNT:\n");
    scanf("%d",&n);
    //while(1/*ch!='n'*/)
          do{
     printf("A.BARDASHT POOL\nB.MOGODI BA KASR KARMOZD 500 $\nC.KHARID SHARZH 5000 $\nD.KHARID SHARZH 2000 $\n");
     printf("CHE AMALIATY MIKHAHID ANGAMDAHID?\n");
     scanf("%c",&ch);


     if(ch=='a' || ch=='A'){
     printf("CHE GHADR MIKHAHID?\n");
     scanf("%d",&a);
     printf("MOGODIE GADIDE SHOMA:\n");
     printf("%d\n",n-a);}


    if(ch=='b' || ch=='B'){
          printf("%d\n",n-500);

   }
  if(ch=='c' || ch=='C'){
          printf("CHAND TA CHARZH 5000 $ MIKHAHI?\n");
          scanf("%d",&b);
          c=b*5000;
          printf("MOGODI BAGHIMANDEH:\n");
          printf("%d\n",n-c);
  }
   if(ch=='d' || ch=='D'){
         printf("CHAND TA CHARZH 2000 $ MIKHAHID?\n");
          scanf("%d",&b);
          c=b*2000;
          printf("MOGODI BAGHIMANDEH:\n");
          printf("%d\n",n-c);
  }

     printf("AMALIATY DIGAR?\nY OR N ");
     scanf("%c",&ab);
          } while (ab!='n' || ab!='N');
//if(ab=='n' || ab=='N'){



     //scanf("%c",&ch);


    return 0;
}
