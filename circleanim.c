#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;int x ;
initgraph (&gd,&gm,"c:\\turboc3\\bgi");
cleardevice();
for(x=0;x<450;x++)
{
setcolor(RED);
circle(0,0,20+x);
delay(1);
setcolor(YELLOW);
circle(50,50,20+x);
delay(1);
setcolor(GREEN);
circle(100,100,20+x);
delay(1);
setcolor(BLUE);
circle(150,150,20+x);
delay(1);
setcolor(CYAN);
circle(200,200,20+x);
delay(1);
setcolor(MAGENTA);
circle(250,250,20+x);
delay(1);
setcolor(RED);
circle(300,300,20+x);
delay(1);
setcolor(YELLOW);
circle(350,350,20+x);
delay(1);
setcolor(GREEN);
circle(350,350,20+x);
delay(1);
setcolor(BLUE);
circle(400,400,20+x);
delay(1);
setcolor(CYAN);
circle(450,450,20+x);
delay(1);
setcolor(MAGENTA);
circle(500,500,20+x);
delay(1);
setcolor(RED);
circle(550,550,20+x);
delay(1);
}
getch();
cleardevice();
}
