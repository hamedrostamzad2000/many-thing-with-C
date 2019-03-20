#include <stdio.h>
#include <stdlib.h>
char m;


int main()
{
          while(m!='q'){
          printf("MIKHAHID BE ONVAN SARASHPAZ VARED SAVID YA MOSHTARY:\n");
          scanf("%c",&m);
          if(m=='s'){
             char n[20];
             char name[50],username[20],username2[20],hj[20],gf[100];
             int b,s=1,i,password,p=0,f,fd,bn,mk=1;
            //FILE *fp;
            //fp=fopen("index.dat","w");




          printf("SABTE NAME SAR ASHPAZE GADID\nVOROD\n");
          scanf("%s",&n);
          if(n[0]=='s'){
               FILE *ty;
               ty=fopen("kaka.dat","w");
             //printf("ENTER YOUR USERNAME:");
             //scanf("%s",&username);
             //fprintf(fp,"%s",username);
             printf("ENTER YOUR PASSWORD:(FAGHAT ADDAD)");
             scanf("%d",&password);
             //k=password;
             fprintf(ty,"%d",password);
             fclose(ty);
          }
           if(n[0]=='v'){
                    int k,l;
             //printf("ENTER YOUR USERNAME:");
             //scanf("%s",&username2);
             printf("ENTER YOUR PASSWORD:(FAGHAT ADDAD)");
             scanf("%d",&k);
             //k=password*1;
              FILE *ty;
              ty=fopen("kaka.dat","r");

          while(!feof(ty)){

           //fscanf(fp,"%s",username);
            //printf("%s\n",username);

            fscanf(ty,"%d",&l);
            //printf("%d\n",l);


            if(l==k){
                    printf("WELCOME\n");
                    p=1;
            }if(l!=k){
            printf("DANGER\n");
            }

            /*if(username2==username){
                    printf("WELCOME\n");
            }if(username2!=username){
            printf("DANGER\n");
            }*/

          }

          fclose(ty);

           }




if(p==1){


printf("\nBAZYABY SHAVAND?");
scanf("%s",hj);
if(hj[0]=='a'){


             char as[20];
          printf("TEHRAN YA ZANGAN?\n");
          scanf("%s",as);
          if(as[0]=='t'){


          FILE *fp;
          fp=fopen("index.dat","r");
          FILE *zx;
          zx=fopen("rara.dat","r");
          FILE *we;
          we=fopen("fafa.dat","r");

          while(!feof(fp)){
           fscanf(fp,"%s\n",&gf);
           fscanf(zx,"%d\n",&fd);
           fscanf(we,"%d\n",&bn);
            printf("\n%d \t%s\t%d\t%d \n",mk,gf,fd,bn);

            mk=mk+1;
          }
          fclose(fp);
          fclose(zx);
          fclose(we);

          }



   if(as[0]=='z'){
          char mb[20];
          int sd,se,aq=1;

        FILE *lk;
        lk=fopen("lklk.dat","r");
        FILE *ok;
        ok=fopen("okok.dat","r");
        FILE *ik;
        ik=fopen("ikik.dat","r");

          while(!feof(lk)){

               fscanf(lk,"%s\n",&mb);
           fscanf(ok,"%d\n",&sd);
           fscanf(ik,"%d\n",&se);
            printf("\n%d \t%s\t%d\t%d \n",aq,mb,sd,se);

            aq=aq+1;


          }


          fclose(lk);
          fclose(ok);
          fclose(ik);

   }



}


if(hj[0]=='n'){
      char df[20];



          printf("TEHRAN YA ZANGAN?\n");
          scanf("%s",df);
          if(df[0]=='t'){


FILE *fp;
fp=fopen("index.dat","w");

FILE *zx;
zx=fopen("rara.dat","w");

FILE *we;
we=fopen("fafa.dat","w");

    while(1){

          printf("ENTER YOUR FOOD:\n");
          printf("%d_",s);
          scanf("%s",&name);
          fprintf(fp,"%s\n",name);
          printf("ENTER YOUR PROMICE:\n");
          scanf("%d",&b);
          fprintf(zx,"%d\n",b);
          printf("CHAND TA?\n");
          scanf("%d",&f);
          fprintf(we,"%d\n",f);
              s=s+1;
          if(name[0]=='f' && name[2]=='n' && name[5]=='h'){
                    printf("YOUR FOODS COMPLETED\n");
                    break;
          }
    }
    fclose(fp);
    fclose(zx);
    fclose(we);

          }





         if(df[0]=='z'){
                    char esm[20];
                    int gheimat,ted;

         FILE *lk;
         lk=fopen("lklk.dat","w");
         FILE *ok;
         ok=fopen("okok.dat","w");
         FILE *ik;
         ik=fopen("ikik.dat","w");
         while(1){

          printf("ENTER YOUR FOOD:\n");
          printf("%d_",s);
          scanf("%s",&esm);
          fprintf(lk,"%s\n",esm);
          printf("ENTER YOUR PROMICE:\n");
          scanf("%d",&gheimat);
          fprintf(ok,"%d\n",gheimat);
          printf("CHAND TA?\n");
          scanf("%d",&ted);
          fprintf(ik,"%d\n",ted);
              s=s+1;
          if(esm[0]=='f' && esm[2]=='n' && esm[5]=='h'){
                    printf("YOUR FOODS COMPLETED\n");
                    break;
          }



         }




         fclose(lk);
         fclose(ok);
         fclose(ik);


         }









         } } }







          if(m=='m'){









         char jk[20];
         printf("TEHRAN YA ZANGAN?\n");
         scanf("%s",jk);
         if(jk[0]=='t'){

//#include <stdio.h>
         char ch[100],po[100];
         int i,j=1,r[20],u=0,e=0,o,x,z,sum=0,va,ma[20],q=0;
//int main(){
          FILE *fp;
          fp=fopen("index.dat","r");
          FILE *zx;
          zx=fopen("rara.dat","r");
          FILE *we;
          we=fopen("fafa.dat","r");
          while(!feof(fp)){

                    //fgetc(fp);
                    //printf("%s",name);

           fscanf(fp,"%s\n",&ch);
           fscanf(zx,"%d\n",&i);
           fscanf(we,"%d\n",&va);
            printf("\n%d \t%s\t%d\t%d \n",j,ch,i,va);

            r[e]=i;
            e=e+1;

            ma[q]=va;
            q=q+1;

            j=j+1;
            //fscanf(fp,"%d",b);
            //printf("%d\n",b);
          }

         //for(u=0;u<q;u++){
                   // printf("%d\n",ma[u]);
          //}

          while(o!=j-1){

          printf("CHE CHIZI MIKHORID:\n");
          scanf("%d",&o);
          e=o-1;
          q=o-1;

          printf("HOW MANY?\n");
          scanf("%d",&x);
          ma[q]=ma[q] -x;
          z=x*r[e];
          sum=z+sum;


    }



    if(sum<100){sum=sum+10;printf("BA 10 $ HAZINE ERSAL HAZINE SHOMA MISHAVAD:");   }
    if(sum>=100 && sum<200){sum=sum-sum/10; printf("HAZINE ERSAL DARYAFT NEMISHAVAD.PAS HAZINE SHOMA BA 10 % TAKHFIF MISHAVAD:\n");}    //sum>=100  bayad balatar neveshteh beshavad
    if(sum>=200){sum=sum-sum*0.2; printf("HAZINE ERSAL DARYAFT NEMISHAVAD.PAS HAZINE SHOMA BA 20 % TAKHFIF MISHAVAD:\n");}//bekhater mesale 3 ta ash ba hazine ersal
    printf("%d",sum);



fclose(fp);
fclose(zx);
fclose(we);




printf("\nSAVE THEM? (ARE YA NA)\n");
scanf("%s",po);
if(po[0]=='a'){

    //FILE *fp;
    //fp=fopen("index.dat","w");
    FILE *zx;
    zx=fopen("rara.dat","w");
    FILE *we;
    we=fopen("fafa.dat","w");


         for(e=0;e<=j-1;e++){

          fprintf(zx,"%d\n",r[e]);

         }


          for(q=0;q<=j-1;q++){
                    fprintf(we,"%d\n",ma[q]);
          }


          //for(u=0;u<=j-1;u++){
           //         fprintf(fp,"%s\n",ch);
          //}

           //fclose(fp);
           fclose(zx);
           fclose(we);

}   }





if(jk[0]=='z'){



//#include <stdio.h>
char ch[100],po[100];
int i,ha=1,j,r[20],u=0,e=0,qw,x,z,sum=0,va,ma[20],q=0;
//int main(){
          FILE *lk;
          lk=fopen("lklk.dat","r");
          FILE *ok;
          ok=fopen("okok.dat","r");
          FILE *ik;
          ik=fopen("ikik.dat","r");
          while(!feof(lk)){

                    //fgetc(fp);
                    //printf("%s",name);

           fscanf(lk,"%s\n",&ch);
           fscanf(ok,"%d\n",&i);
           fscanf(ik,"%d\n",&va);
            printf("\n%d \t%s\t%d\t%d \n",ha,ch,i,va);

            r[e]=i;
            e=e+1;

            ma[q]=va;
            q=q+1;

            ha=ha+1;
            //fscanf(fp,"%d",b);
            //printf("%d\n",b);
          }

         //for(u=0;u<q;u++){
                   // printf("%d\n",ma[u]);
          //}

          j=ha*1;

          while(qw!=ha-1){

          printf("what whould you want to eat?:\n");
          scanf("%d",&qw);
          e=qw-1;
          q=qw-1;

          printf("HOW MANY?\n");
          scanf("%d",&x);
          ma[q]=ma[q] -x;
          z=x*r[e];
          sum=z+sum;


    }



    if(sum<100){sum=sum+10;printf("plus 10 toman tax in addition to your cash get  :");   }
    if(sum>=100 && sum<200){sum=sum-sum/10; printf("HAZINE ERSAL DARYAFT NEMISHAVAD.PAS HAZINE SHOMA BA 10 % TAKHFIF MISHAVAD:\n");}    //sum>=100  bayad balatar neveshteh beshavad
    if(sum>=200){sum=sum-sum*0.2; printf("HAZINE ERSAL DARYAFT NEMISHAVAD.PAS HAZINE SHOMA BA 20 % TAKHFIF MISHAVAD:\n");}//bekhater mesale 3 ta ash ba hazine ersal
    printf("%d",sum);



fclose(lk);
fclose(ok);
fclose(ik);




printf("\nSAVE THEM? (ARE YA NA)\n");
scanf("%s",po);
if(po[0]=='a'){

    //FILE *fp;
    //fp=fopen("index.dat","w");
    FILE *ok;
    ok=fopen("okok.dat","w");
    FILE *ik;
    ik=fopen("ikik.dat","w");


         for(e=0;e<=j-1;e++){

          fprintf(ok,"%d\n",r[e]);

         }


          for(q=0;q<=j-1;q++){
                    fprintf(ik,"%d\n",ma[q]);
          }


          //for(u=0;u<=j-1;u++){
           //         fprintf(fp,"%s\n",ch);
          //}

          //fclose(fp);
          fclose(ok);
          fclose(ik);

          } }













}
         }
//getch();
    return 0;
}
