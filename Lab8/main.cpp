#include<stdio.h>
//scaling with respect to its centroid
#include<graphics.h>

int main()
{
	int gd=DETECT,gm;
	int x1,x2,x3,y1,y2,y3,sx,sy,xc,yc;
	printf("enter the 1st vertex of triangle\n");
	scanf("%d %d",&x1,&y1);
	printf("enter the 2nd vertex of the triangle\n");
	scanf("%d %d",&x2,&y2);
	printf("enter the 3rd vertex of the triangle\n");
	scanf("%d %d",&x3,&y3);
	printf("enter the scaling factor\n");
	scanf("%d %d",&sx,&sy);
	xc=(x1+x2+x3)/3;
	yc=(y1+y2+y3)/3;
	 initgraph(&gd, &gm,"");
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x1,y1,x3,y3);
	line(x1*sx-xc*(1-sx),y1*sy-yc*(1-sy),x2*sx-xc*(1-sx),y2*sy-yc*(1-sy));
	line(x2*sx-xc*(1-sx),y2*sy-yc*(1-sy),x3*sx-xc*(1-sx),y3*sy-yc*(1-sy));
    line(x1*sx-xc*(1-sx),y1*sy-yc*(1-sy),x3*sx-xc*(1-sx),y3*sy-yc*(1-sy));
    getch();
    closegraph();
    return 0;
	
	
	
}
