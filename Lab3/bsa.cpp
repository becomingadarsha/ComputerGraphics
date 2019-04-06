#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
int i=0;float p;
 void positiveslopelessthanone(float step,float x,float y,float dx,float dy)
{

p=2*abs(dy)-abs(dx);
	while(i<step)
	{
		
		putpixel(x,y,1);
		if(p<0)
		{
			x=x+1;
			y=y;
			p=p+2*abs(dy);
		}
		else if(p>=0)
		{
			x=x+1;
			y=y+1;
			p=p+2*abs(dy)-2*abs(dx);
		}
		printf("%f\t%f",x,y);
	printf("\n");
	delay(100);	
	i++;
	}
}
void negativeslopelessthanone(float step,float x,float y,float dx,float dy)
{

p=2*abs(dy)-abs(dx);
	while(i<step)
	{
		
		putpixel(x,y,1);
		if(p<0)
		{
			x=x+1;
			y=y;
			p=p+2*abs(dy);
		}
		else if(p>=0)
		{
			x=x+1;
			y=y-1;
			p=p+2*abs(dy)-2*abs(dx);
		}
		printf("%f\t%f",x,y);
	printf("\n");
	delay(100);	
	i++;
	}
}
void positiveslopegreaterthanone(float step,float x,float y,float dx,float dy)
{

p=2*abs(dx)-abs(dy);
	while(i<step)
	{
		
		putpixel(x,y,1);
		if(p<0)
		{
			x=x;
			y=y+1;
			p=p+2*abs(dx);
		}
		else if(p>=0)
		{
			x=x+1;
			y=y-1;
			p=p+2*abs(dx)-2*abs(dy);
		}
		printf("%f\t%f",x,y);
	printf("\n");
	delay(100);	
	i++;
	}
}
void negativeslopegreaterthanone(float step,float x,float y,float dx,float dy)
{

p=2*abs(dx)-abs(dy);
	while(i<step)
	{
		
		putpixel(x,y,1);
		if(p<0)
		{
			x=x;
			y=y-1;
			p=p+2*abs(dx);
		}
		else if(p>=0)
		{
			x=x+1;
			y=y-1;
			p=p+2*abs(dx)-2*abs(dy);
		}
		printf("%f\t%f",x,y);
	printf("\n");
	delay(100);	
	i++;
	}
}
int main()
{
	float x1,y1,x2,y2,dx,dy,step,x,y,slope,slopemag,step1;
	int gd=DETECT,gm;
	printf("enter the inital points\n");
	scanf("%f %f",&x1,&y1);
		printf("enter the final points\n");
	scanf("%f %f",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	slope=dy/dx;
	slopemag=abs(slope);
	step=abs(dx);
	step1=abs(dy);
	x=x1;y=y1;
	printf("x coordinate\ty coordinate\n");
		initgraph(&gd,&gm,"");
	if((slope>0)&&(slopemag<1))
		positiveslopelessthanone(step,x,y,dx,dy);
	else if((slope<0)&&(slopemag<1))
		negativeslopelessthanone(step,x,y,dx,dy);
	else if((slope>0)&&(slopemag>1))
	   positiveslopegreaterthanone(step1,x,y,dx,dy);
    else if((slope<0)&&(slopemag>1))
       negativeslopegreaterthanone(step1,x,y,dx,dy);
	getch();
	closegraph();
	return 0;
	
	
}