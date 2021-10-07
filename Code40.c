// Write a program to find the slope of a line and angle of inclination that passes
// through two points P and Q with coordinates (xp, yp) and (xq, yq) respectively.
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x1, y1, x2, y2, m;
    float var;
    printf("Enter your x1 and x2 value respectively\n");
    scanf("%d %d", &x1, &x2);

    printf("Enter your y1 and y2 value respectively\n");
    scanf("%d %d", &y1, &y2);

    m = (x2 - x1) / (y2 - y1);
    var = atan(m);

    printf("The slope is %d and the angle of inclination is %0.3f\n", m, var);

    return 0;
}