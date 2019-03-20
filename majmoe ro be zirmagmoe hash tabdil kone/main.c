#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int j=0,p=0,i,u,z,b[20],a,k,c,sum,h,fac=1,e=0,r=0,t[2000],l,x[1000]
,q,lk;

int main()
{
srand(time(0));


      for(int o=0;o<1500;o++){



    z=rand()%11;
    //printf("%d\n",z);

    //if(z==0){
    //      z=rand()%6;
    //}


         j=0;
         p=0;
         sum=0;
         fac=1;
         //e=0;
         //r=0;
    for(i=0;i<z;i++){


          a=rand()%11;
          //printf("%d\n",a);

          //if(a==0){
          //          a=rand()%6;
          //}
          //if(a==0){
         //           a=rand()%6;
         // }



          if(j!=0){

               for(u=0;u<j;u++){




                    if(b[u]==a){
                   p=p+1;

                    }

               }



          }




          if(p==j){
                    b[j]=a;
                    sum=a+sum;
                    fac=a*fac;
                    j++;

          }

        p=j*1;
    }


    if(sum==15 && fac!=0){


    if(e!=0){
    for(l=0;l<e;l++){
    if(t[l]==fac){
          r++;
    }
    }
    }

    if(e==r){
    t[e]=fac;
    e++;
    //printf("%d\n\n",fac);
    //x++

    for(k=0;k<j;k++){
          printf("%d\n",b[k]);
    }
    printf("\n\n");
//printf("\n%d\n\n",sum);

    }

    r=e*1;




//printf("%d\n\n",fac);

    }

          }

    return 0;
}

