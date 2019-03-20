#include <stdio.h>
#include <stdlib.h>

int n,b[1000],temp,i,j,k,l;
int main()
{
    printf("ENTER NUMBERS:\n");
    do{
          scanf("%d",&n);
          b[i]=n;
          i++;
    }while(n!=0);
    for(l=0;l<i;l++){
    for(j=0;j<i;j++){
          if(b[j-1]>b[j]){
                    temp=b[j-1];
                    b[j-1]=b[j];
                    b[j]=temp;
          }
    }
    }
    for(k=j-1;k>j-3;k--){        //man faghat aadad ro az kochak be bozorg moratab kardam.
          printf("%d\n",b[k]);    //faghat dar moghee chap kardan goftam az akhar be akhare
    }                             //menhaye do ra chap kon.
    return 0;
}
