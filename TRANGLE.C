#include<graphics.h>
#include<conio.h>

void main(){
    int gd=DETECT, gm;
    int i,j;
    initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");

    setbkcolor(WHITE);

    for(i=0;i<=500;i++){
      for(j=0;j<=i;j++){
	 putpixel(j,i,RED);
      }
    }

    getch();
     }