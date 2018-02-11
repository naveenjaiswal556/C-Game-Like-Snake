#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>

void yoyo();
void dis();
void over();
void start();

char snake='*',key,f='#',exi;
int i,j,p=40,q=13,x=40,y=12,up=0,down=0,left=0,right=0,ssize=3,score;


void keys();

void main()
{
textcolor(4);
clrscr();
start();
while(1){
delay(30);
clrscr();
if(x>=80){
  over();
  }else if(x<=1){
	  over();
	  }else if(y>=25){
		   over();
		  }else if(y<=1){
			  over();
			  }
if(kbhit()){
key=getch();
   if(key=='e'){
     gotoxy(30,12);
     cout<<" ArE yOu SuRe:";
     cin>>exi;
     if(exi=='y'|| exi=='Y'){
     exit(0);
     }else{
	  continue;
	  }
     }else if(key=='w'){
	     for(i=0;i<ssize;i++){
	     if(kbhit()){break; }
	     dis();
	     y--;
	     gotoxy(x,y);
	     yoyo();
	     cout<<snake;
	     delay(50);
	     }
	     up=1;
	     down=0;
	     left=0;
	     right=0;
	     }else if(key=='s'){
	     for(i=0;i<ssize;i++){
	     if(kbhit()){break; }
	     dis();
	     y++;
	     gotoxy(x,y);
	     yoyo();
	     cout<<snake;
	     delay(50);
	     }
	     up=0;
	     down=1;
	     left=0;
	     right=0;
	     }else if(key=='a'){
	     for(i=0;i<ssize;i++){
	     if(kbhit()){break; }
	     dis();
	     x--;
	     gotoxy(x,y);
	     yoyo();
	     cout<<snake;
	     delay(20);
	     }
	     up=0;
	     down=0;
	     left=1;
	     right=0;
	     }else if(key=='d'){
	     for(i=0;i<ssize;i++){
	     if(kbhit()){break; }
	     dis();
	     x++;
	     gotoxy(x,y);
	     yoyo();
	     cout<<snake;
	     delay(20);
	     }
	     up=0;
	     down=0;
	     left=0;
	     right=1;
	     }else if(key=='p'){
		     gotoxy(30,12);
		     cout<<" GaMe PaUsED.....";
		     getch();
		     }
}else{
     if(up==1){
       gotoxy(x,y--);
       for(j=0;j<ssize;j++){
	  gotoxy(x,y+j);
	  cout<<snake;
	  }
       }else if(down==1){
	       gotoxy(x,y++);
	       for(j=0;j<ssize;j++){
		  gotoxy(x,y-j);
		  cout<<snake;
		  }
	       }else if(left==1){
		       gotoxy(x--,y);
		       for(j=0;j<ssize;j++){

		       cout<<snake;
			  }
		       }else if(right==1){
			       gotoxy(x++,y);
			       for(j=0;j<ssize;j++){

			       cout<<snake;
				  }
			       }
			       yoyo();
     }
dis();
gotoxy(p,q);
cout<<f;
}
}

void yoyo(){
     if(p==x&&q==y){
       score++;
       ssize++;
       p=(rand()%100)/2;
       p=p+3;
       q=(rand()%100)/5;
       q=q+3;
       }
}

void dis(){
int i;
gotoxy(2,2);
cout<<score;
for(i=2;i<=79;i++){
   gotoxy(i,1);
   cout<<'!';
   gotoxy(i,25);
   cout<<'!';
   }
   for(i=1;i<=24;i++){
   gotoxy(1,i);
   cout<<'!';
   gotoxy(80,i);
   cout<<'!';
   }
gotoxy(p,q);
cout<<f;

}


void over()
{
cout<<"********************************************************************************";
cout<<"********************************************************************************";
cout<<"********************************************************************************\n\n\n\n\n\n\n";

cout<<"\n================================>  Made By NJ  <===============================";
cout<<"\n==========================>  GaMe oVeR :: Score Is:"<<score<<"<==========================";

cout<<"\n\n\n\n\n\n\n********************************************************************************";
cout<<"********************************************************************************";
cout<<"********************************************************************************";
getch();
exit(0);
}

void start()
{
cout<<"********************************************************************************";
cout<<"********************************************************************************";
cout<<"********************************************************************************\n\n\n\n\n\n\n";

cout<<"\n================================>  Made By NJ  <===============================";
cout<<"\n=============================> 'W A S D' To Move  <============================";
cout<<"\n=========================> 'P'For Pause & 'E'For Exit  <=======================";

cout<<"\n\n\n\n\n\n\n********************************************************************************";
cout<<"********************************************************************************";
cout<<"********************************************************************************";
getch();;
}