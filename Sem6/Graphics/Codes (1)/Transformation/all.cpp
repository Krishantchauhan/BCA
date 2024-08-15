#include <stdio.h>
#include <graphics.h>
#include <math.h>
#define PI 3.14159265
void drawRectangle(int x[], int y[])
{
    // Draw the rectangle
    for (int i = 0; i < 3; i++)
    {
        line(x[i], y[i], x[i + 1], y[i + 1]);
    }
    line(x[3], y[3], x[0], y[0]);
}
void translateRectangle(int x[], int y[], int tx, int ty)
{
    // Translate the rectangle
    for (int i = 0; i < 4; i++)
    {
        x[i] += tx;
        y[i] += ty;
    }
}
void scaleRectangle(int x[], int y[], float sx, float sy)
{
    // Scale the rectangle
    for (int i = 0; i < 4; i++)
    {
        x[i] = round(x[i] * sx);
        y[i] = round(y[i] * sy);
    }
}
void rotateRectangle(int x[], int y[], float angle)
{
    int centerX = (x[0] + x[2]) / 2;
    int centerY = (y[0] + y[2]) / 2;
    // Rotate each point of the rectangle around the center
    for (int i = 0; i < 4; i++)
    {
        int dx = (x[i] - centerX);
        int dy = (y[i] - centerY);
        // Apply rotation formula
        x[i] = round(centerX + dx * cos(angle * PI / 180) - dy * sin(angle * PI / 180));
        y[i] = round(centerY + dx * sin(angle * PI / 180) + dy * cos(angle * PI / 180));
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x[] = {100, 200, 200, 100};
    int y[] = {100, 100, 200, 200};
    drawRectangle(x, y);

    translateRectangle(x, y, 50, 50);
    scaleRectangle(x, y, 1.5, 1.5);
    rotateRectangle(x, y, 45);
    drawRectangle(x, y);

    getch();
    closegraph();
    return 0;
}