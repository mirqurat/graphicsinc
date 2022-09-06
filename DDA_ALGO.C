#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main(){
   int gd= DETECT,gm,i;
   float x,y,dx,dy,steps;
   int x0,x1,y0,y1;

   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   setbkcolor(WHITE);

   x0=100,x1=200, y0=500,y1=300;

   dx=(float)(x1-x0);
   dy=(float)(y1-y0);

   if(dx>=dy)
     steps=dx;
   else
   steps=dy;

   dx=dx/steps;
   dy=dy/steps;

   x =x0;
   y = y0;
   i=1;


   while(i<=steps){
   putpixel(x,y,RED);
   x +=dx;
   y +=dy;
   i= i+1;

   }

   getch();
 }