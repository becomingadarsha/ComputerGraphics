#include<stdio.h>
#include<graphics.h>

void drawline(int x0, int y0, int x1, int y1)
{
    int x, y, dx, dy, pk, k ,xEnd;
    
	   dx=abs(x1-x0);  
	    dy=abs(y1-y0);  
	    
		if(x1>x0)
		{    x = x0;  
			y = y0;    
			xEnd = x1;  
		}   
		
		else
		{   
		 x = x1;
		 y = y1;    
		 xEnd = x0;  
		}  
		putpixel (x,y,1);   
		pk=2*dy-dx;
		
		  
		while (x<=xEnd){   
		if(pk<0)
		{    
			x=x+1;    
			y=y+1;    
			pk=pk+2*dy;   
		}   
		
		else   
			{    
				x=x+1;   
				 y=y+1;   
		  		pk= pk+2*dy-2*dx; 
		   }   
		   putpixel (x,y,1);  
		}
}

int main()
{
	int gdriver=DETECT, gmode, error, x0, y0, x1, y1;
	initgraph(&gdriver, &gmode, NULL);

	printf("Enter co-ordinates of first point: ");
	scanf("%d%d", &x0, &y0);

	printf("Enter co-ordinates of second point: ");
	scanf("%d%d", &x1, &y1);
	drawline(x0, y0, x1, y1);

     getch();
     closegraph();
	return 0;
}
