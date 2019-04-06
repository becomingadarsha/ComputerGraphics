//rotate a triangle about origin by 60 degree

#include <stdio.h>
#include <graphics.h>
#include <process.h>
#include <math.h>
void triangle(int x1, int y1, int x2, int y2, int x3, int y3);
void Rotate(int x1, int y1, int x2, int y2, int x3, int y3);
int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3;
    initgraph(&gd, &gm, "");
    printf("Enter the 1st point for the triangle:");
    scanf("%d%d", &x1, &y1);
    printf("Enter the 2nd point for the triangle:");
    scanf("%d%d", &x2, &y2);
    printf("Enter the 3rd point for the triangle:");
    scanf("%d%d", &x3, &y3);
    triangle(x1, y1, x2, y2, x3, y3);
    Rotate(x1, y1, x2, y2, x3, y3);
    getch();
}
void triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}
void Rotate(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int nx1, nx2, nx3, ny1, ny2, ny3;
    int sx, sy, xt, yt, r;
    float t;

    printf("\n Enter the angle of rotation");
    scanf("%d", &r);
    t = 3.14 * r / 180;
    nx1 = abs(x1 * cos(t) - y1 * sin(t));
    ny1 = abs(x1 * sin(t) + y1 * cos(t));
    nx2 = abs(x2 * cos(t) - y2 * sin(t));
    ny2 = abs(x2 * sin(t) + y2 * cos(t));
    nx3 = abs(x3 * cos(t) - y3 * sin(t));
    ny3 = abs(x3 * sin(t) + y3 * cos(t));
    triangle(nx1, ny1,  nx2, ny2, nx3, ny3);
    getch();
}
