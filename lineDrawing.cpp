
#include<graphics.h>
#include<iostream>
#include<cmath>
#define ROUND(a) ((int)(a+0.5))
void lineDrawByEqn(int x1,int y1,int x2,int y2){
       int gd=DETECT,gm;
initgraph(&gd,&gm,"");
    int x,y;
    int m=(y2-y1)/(x2-x1);
    int c=y1-m*x1;
     x=x1;
    for(int i=0;i<x2;i++)
    {
        putpixel(ROUND(x),ROUND(y),RED);
 //delay(50);
        y=m*x+c;
        x++;

    }
    getch();
closegraph();

}
int main(){

lineDrawByEqn(50,80,30,60);



return 0;
}
