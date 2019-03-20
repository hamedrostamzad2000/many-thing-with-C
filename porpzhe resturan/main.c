#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
char m,gfd,vc[2][10];
int h,w,s;

int main()
{
          initscr();
          getmaxyx(stdscr,h,w);
          start_color();
          init_pair(1,COLOR_GREEN,COLOR_BLACK);
          init_pair(2,COLOR_RED,COLOR_BLACK);
          init_pair(3,COLOR_BLUE,COLOR_BLACK);
          init_pair(4,COLOR_WHITE,COLOR_BLACK);
          init_pair(5,COLOR_MAGENTA,COLOR_BLACK);


          //vline(ACS_VLINE,h);
          while(gfd!='q'){
          initscr();
          getmaxyx(stdscr,h,w);
          //vline(ACS_VLINE,h);




          while(m!='q'){

          attron(COLOR_PAIR(1));


          printw("MIKHAHID BE ONVAN SARASHPAZ VARED SAVID YA MOSHTARY:\n");


          wrefresh(stdscr);
          WINDOW *iu;
          iu=newwin(3,10,3,35);
          box(iu,'|','-');
          wrefresh(iu);

          //vc[2][10] = {"sarashpaz","moshtary"};
          /*attron(COLOR_PAIR(3));
          for(int s=0;s<2;s++){
          move(s+3,20);
          printw("%s",vc[s]);
          }
          attroff(COLOR_PAIR(3));


          attron(COLOR_PAIR(4));
          move(s+3,20);
          printw("%s",vc[s]);
          attroff(COLOR_PAIR(4));*/





          move(4,37);
          scanw("%c",&m);

          //clear();

          if(m=='s'){
             char n[20];
             char name[50],username[20],username2[20],hj[20],gf[100],tu;
             int b,s=1,i,password,p=0,f,fd,bn,mk=1;
            //FILE *fp;
            //fp=fopen("index.dat","w");



          move(8,0);
          printw("SABTE NAME SAR ASHPAZE GADID                    VOROD\n");

          wrefresh(stdscr);
          WINDOW *vx;
          vx=newwin(3,10,12,35);
          box(vx,'|','-');
          wrefresh(vx);

          move(13,37);
          scanw("%s",&n);

          clear();

          if(n[0]=='s'){
               FILE *ty;
               ty=fopen("kaka.dat","w");
             //printf("ENTER YOUR USERNAME:");
             //scanf("%s",&username);
             //fprintf(fp,"%s",username);



             printw("ENTER YOUR PASSWORD:(FAGHAT ADDAD)");

             wrefresh(stdscr);
             WINDOW *bx;
             bx = newwin(5, 15, 3, 35);
             box(bx, '|' ,'-' );
             wrefresh(bx);

             move(5,37);
             scanw("%d",&password);

             WINDOW *login;
             login = newwin(3, 15, 10, 10);
             box(login,0,0);
             wrefresh(login);

             attron(COLOR_PAIR(2));
             move(11,13);
             printw("log in");

             //move(8,0);
             tu=getch();
             //if(tu=='f'){
             //move(7,15);
             //}

             clear();
             //k=password;
             fprintf(ty,"%d",password);
             fclose(ty);
          }
           if(n[0]=='v'){
                    int k,l;
             //printf("ENTER YOUR USERNAME:");
             //scanf("%s",&username2);
             printw("ENTER YOUR PASSWORD:(FAGHAT ADDAD)");


             wrefresh(stdscr);
             WINDOW *sd;
             sd=newwin(5,15,3,35);
             box(sd,'|','-');
             wrefresh(sd);

             move(5,37);
             scanw("%d",&k);

             attron(COLOR_PAIR(2));

             WINDOW *xm;
             xm=newwin(3,15,10,10);
             box(xm,0,0);
             wrefresh(xm);

             move(11,13);
             printw("log in");

             tu=getch();

             clear();
             //k=password*1;
              FILE *ty;
              ty=fopen("kaka.dat","r");

          while(!feof(ty)){

           //fscanf(fp,"%s",username);
            //printf("%s\n",username);

            fscanf(ty,"%d",&l);
            //printf("%d\n",l);


            attron(COLOR_PAIR(1));

            if(l==k){
                    printw("WELCOME\n");
                    p=1;
            }if(l!=k){
            attron(COLOR_PAIR(2));
            printw("DANGER\n");
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

attron(COLOR_PAIR(1));
printw("\nBAZYABY SHAVAND?");

wrefresh(stdscr);
WINDOW *gx;
gx=newwin(3,10,3,35);
box(gx,'|','-');
wrefresh(gx);

move(4,37);
scanw("%s",hj);

if(hj[0]=='a'){


          move(8,0);
             char as[20],ks,ab[20];
          printw("TEHRAN YA ZANGAN?\n");

          wrefresh(stdscr);
          WINDOW *up;
          up=newwin(3,15,9,35);
          box(up,'|','-');
          wrefresh(up);

          move(10,37);
          scanw("%s",as);

          //wrefresh(up);
          clear();


          if(as[0]=='t'){



          FILE *fp;
          fp=fopen("index.dat","r");
          FILE *zx;
          zx=fopen("rara.dat","r");
          FILE *we;
          we=fopen("fafa.dat","r");


          //printw("\n");
          while(!feof(fp)){
           fscanf(fp,"%s\n",&gf);
           fscanf(zx,"%d\n",&fd);
           fscanf(we,"%d\n",&bn);
            printw("\n%d \t%s\t%d\t%d \n",mk,gf,fd,bn);

            mk=mk+1;
          }



          wrefresh(stdscr);
          WINDOW *hx;
          hx=newwin(3,30,9,7);
          box(hx,0,0);
          wrefresh(hx);

          attron(COLOR_PAIR(2));
          move(10,10);
          printw("bazgasht be safhe asli");

          attroff(COLOR_PAIR(2));
          //move(16,12);
          //scanw("%s",ab);

          ks=getch();

          clear();






          fclose(fp);
          fclose(zx);
          fclose(we);




          }



   if(as[0]=='z'){
          char mb[20],za[20];
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
            printw("\n%d \t%s\t%d\t%d \n",aq,mb,sd,se);

            aq=aq+1;


          }


          fclose(lk);
          fclose(ok);
          fclose(ik);





          wrefresh(stdscr);
          WINDOW *hx;
          hx=newwin(3,30,15,10);
          box(hx,0,0);
          wrefresh(hx);


          attron(COLOR_PAIR(2));
          move(16,14);
          printw("bazgasht be safhe asli");
          attroff(COLOR_PAIR(2));



          //move(16,12);
          //scanw("%s",za);

          ks=getch();

          clear();


   }



}


if(hj[0]=='n'){
      char df[20],js;




      move(8,0);
          printw("TEHRAN YA ZANGAN?\n");

          wrefresh(stdscr);
          WINDOW *sq;
          sq=newwin(3,10,8,35);
          box(sq,'|','-');
          wrefresh(sq);

          move(9,37);
          scanw("%s",df);

          clear();

          if(df[0]=='t'){


FILE *fp;
fp=fopen("index.dat","w");

FILE *zx;
zx=fopen("rara.dat","w");

FILE *we;
we=fopen("fafa.dat","w");

    while(1){

          printw("ENTER YOUR FOOD:\n");
          printw("%d_",s);
          scanw("%s",&name);
          fprintf(fp,"%s\n",name);
          printw("ENTER YOUR PROMICE:\n");
          scanw("%d",&b);
          fprintf(zx,"%d\n",b);
          printw("CHAND TA?\n");
          scanw("%d",&f);
          fprintf(we,"%d\n",f);
              s=s+1;
          if(name[0]=='f' && name[2]=='n' && name[5]=='h'){

                    attron(COLOR_PAIR(5));
                    printw("YOUR FOODS COMPLETED\n");
                    break;
                    attroff(COLOR_PAIR(5));

          }
    }
    fclose(fp);
    fclose(zx);
    fclose(we);

          }



          //js=getch();

          clear();







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

          printw("ENTER YOUR FOOD:\n");
          printw("%d_",s);
          scanw("%s",&esm);
          fprintf(lk,"%s\n",esm);
          printw("ENTER YOUR PROMICE:\n");
          scanw("%d",&gheimat);
          fprintf(ok,"%d\n",gheimat);
          printw("CHAND TA?\n");
          scanw("%d",&ted);
          fprintf(ik,"%d\n",ted);
              s=s+1;
          if(esm[0]=='f' && esm[2]=='n' && esm[5]=='h'){
                    printw("YOUR FOODS COMPLETED\n");
                    break;
          }



         }




         fclose(lk);
         fclose(ok);
         fclose(ik);


         }



         //js=getch();

         clear();





         } } }







          if(m=='m'){









         char jk[20];

         move(9,0);
         printw("TEHRAN YA ZANGAN?\n");

         wrefresh(stdscr);
         WINDOW *nx;
         nx=newwin(3,10,8,35);
         box(nx,'|','-');
         wrefresh(nx);


         move(9,37);
         scanw("%s",&jk);


         clear();


         if(jk[0]=='t'){

//#include <stdio.h>
         char ch[100],po[100],yt,ax[50],gj;
         int i,j=1,r[20],u=0,e=0,o,x,z,sum=0,va,ma[20],q=0,fc,sc,vc;
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
           //fgets(ax,49,fp);
           fscanf(fp,"%s\n",&ch);
           fscanf(zx,"%d\n",&i);
           fscanf(we,"%d\n",&va);
            printw("\n%d \t%s\t%d\t%d \n",j,ch,i,va);




            r[e]=i;
            e=e+1;

            ma[q]=va;
            q=q+1;

            j=j+1;



            }
            //fscanf(fp,"%d",b);
            //printf("%d\n",b);


         //for(u=0;u<q;u++){
                   // printf("%d\n",ma[u]);
          //}




          /*attron(COLOR_PAIR(1));
          for(int vc=0;vc<50;vc++){
          move(vc+3,35);
          printw("%s",ax[vc]);
          }
          attroff(COLOR_PAIR(1));



          attron(COLOR_PAIR(2));
          move(vc+3,35);
          printw("%s",ax[vc]);
          attroff(COLOR_PAIR(COLOR_PAIR(2)));*/






          while(o!=j-1){

          printw("CHE CHIZI MIKHORID:\n");
          scanw("%d",&o);
          e=o-1;
          q=o-1;

          printw("HOW MANY?\n");
          scanw("%d",&x);
          ma[q]=ma[q] -x;
          z=x*r[e];
          sum=z+sum;


    }

attron(COLOR_PAIR(2));

    if(sum<100){sum=sum+10;printw("BA 10 $ HAZINE ERSAL HAZINE SHOMA MISHAVAD:");   }
    if(sum>=100 && sum<200){sum=sum-sum/10; printw("HAZINE ERSAL DARYAFT NEMISHAVAD.PAS HAZINE SHOMA BA 10 % TAKHFIF MISHAVAD:\n");}    //sum>=100  bayad balatar neveshteh beshavad
    if(sum>=200){sum=sum-sum*0.2; printw("HAZINE ERSAL DARYAFT NEMISHAVAD.PAS HAZINE SHOMA BA 20 % TAKHFIF MISHAVAD:\n");}//bekhater mesale 3 ta ash ba hazine ersal
    printw("%d",sum);
attroff(COLOR_PAIR(2));


fclose(fp);
fclose(zx);
fclose(we);

wrefresh(stdscr);
WINDOW *ad;
ad=newwin(3,10,17,40);
box(ad,'|','-');
wrefresh(ad);




attron(COLOR_PAIR(4));

move(18,20);
printw("\nAYA MIKHAHID BEKHARID? (ARE YA NA)");

attroff(COLOR_PAIR(4));





move(18,42);
scanw("%s",&po);


if(po[0]=='a'){

    move(21,5);
    printw("AZ KHARID SHOMA MOTSHAKERIM\n");



    wrefresh(stdscr);
    WINDOW *ui;
    ui=newwin(3,30,20,47);
    box(ui,0,0);
    wrefresh(ui);

    attron(COLOR_PAIR(2));
    move(21,50);
    printw("BAZGASHT BE SAFHE ASLI");
    attroff(COLOR_PAIR(2));

    gj=getch();





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

           clear();


}   }





if(jk[0]=='z'){



//#include <stdio.h>
char ch[100],po[100],gj;
int i,ha=1,j,r[20],u=0,e=0,qw,x,z,sum=0,va,ma[20],q=0,y=2;
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
           //move(y,0);
            printw("\n%d \t%s\t%d\t%d \n",ha,ch,i,va);

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

          printw("CHE CHISI MIKHORID?:\n");
          scanw("%d",&qw);
          e=qw-1;
          q=qw-1;

          printw("CHAND TA?\n");
          scanw("%d",&x);
          ma[q]=ma[q] -x;
          z=x*r[e];
          sum=z+sum;


    }

attron(COLOR_PAIR(2));

    if(sum<100){sum=sum+10;printw("BA 10 $ HAZINE ERSAL.HAZINE SHOMA MISHAVAD :");   }
    if(sum>=100 && sum<200){sum=sum-sum/10; printw("HAZINE ERSAL DARYAFT NEMISHAVAD.PAS HAZINE SHOMA BA 10 % TAKHFIF MISHAVAD:\n");}    //sum>=100  bayad balatar neveshteh beshavad
    if(sum>=200){sum=sum-sum*0.2; printw("HAZINE ERSAL DARYAFT NEMISHAVAD.PAS HAZINE SHOMA BA 20 % TAKHFIF MISHAVAD:\n");}//bekhater mesale 3 ta ash ba hazine ersal
    printw("%d",sum);

attroff(COLOR_PAIR(2));

fclose(lk);
fclose(ok);
fclose(ik);






wrefresh(stdscr);
WINDOW *yt;
yt=newwin(3,10,17,45);
box(yt,'|','-');
wrefresh(yt);




attron(COLOR_PAIR(4));

move(18,20);
printw("\nAYA MIKHAHID BEKHARID? (ARE YA NA)");

attroff(COLOR_PAIR(4));





move(18,47);
scanw("%s",&po);





if(po[0]=='a'){


    move(21,5);
    printw("AZ KHARID SHOMA MOTSHAKERIM");


    wrefresh(stdscr);
    WINDOW *op;
    op=newwin(3,30,21,47);
    box(op,'|','-');
    wrefresh(op);

    attron(COLOR_PAIR(2));
    move(22,50);
    printw("BAZGASHT BE SAFHE ASLI");
    attroff(COLOR_PAIR(2));

    gj=getch();

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



          clear();

          }



        if(po[0]=='n'){

          printw("KHOSH AMADID\n");

          }
          }













}
}
m=getch();
clear();
usleep(1000);
refresh();
}
endwin();
//getch();
    return 0;
}
