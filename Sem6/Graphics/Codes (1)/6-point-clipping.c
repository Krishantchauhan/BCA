#include <stdio.h>
#include <graphics.h>
int main()
{
    int Xmin, Ymin, Xmax, Ymax;
    printf("Enter coordinates of clipping window\n");
    scanf("%d%d%d%d", &Xmin, &Ymin, &Xmax, &Ymax);
    int x, y;
    printf("\nEnter coordinate of your point\n");
    scanf("%d%d", &x, &y);

    if (x > Xmin && y > Ymin && x < Xmax && y < Ymax)
        printf("\nPoint is inside clipping Window");
    else
        printf("\nPoint is out of clipping window");

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    rectangle(Xmin, Ymin, Xmax, Ymax);
    putpixel(x, y, YELLOW);
    getch();
    return 0;
}
