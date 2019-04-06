//scaling twice
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	int x1,x2,x3,y1,y2,y3,sx,sy;
	printf("enter the 1st vertex of triangle\n");
	scanf("%d %d",&x1,&y1);
	printf("enter the 2nd vertex of the triangle\n");
	scanf("%d %d",&x2,&y2);
	printf("enter the 3rd vertex of the triangle\n");
	scanf("%d %d",&x3,&y3);
	
	initgraph(&gd,&gm,"");
	
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x1,y1,x3,y3);
	
	//after scaling
	sx =2;
	sy =2;
	
	line(x1*sx,y1*sy,x2*sx,y2*sy);
	line(x2*sx,y2*sy,x3*sx,y3*sy);
    line(x1*sx,y1*sy,x3*sx,y3*sy);
    getch();
    closegraph();
    return 0;
	
	
	
}
