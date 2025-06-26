// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("techniciansassistant");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("techniciansassistant")
//      }
//    }
#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{

    int i, holeCount;
    float hole1x, hole2x, hole3x, hole4x, hole5x, hole6x, hole7x, hole8x, hole9x, hole10x, hole11x, hole12x;
    float hole1y, hole2y, hole3y, hole4y, hole5y, hole6y, hole7y, hole8y, hole9y, hole10y, hole11y, hole12y;
    float centerpointx, centerpointy;
    float radius, diameter, a, b, c, d, e, f, g, h, k, l;

    printf("how many holes do you have to work out?\n(1-12)");
    scanf("%d", &holeCount);

    printf("are you working on a radius or a pcd?\n""(1 for radius, 2 for pcd)\n");
    scanf("%d", &i);

    if (i == 1)
    {
        printf("enter the radius:");
        scanf("%f", &radius);
        diameter = radius * 2.0;
    };
    if (i == 2)
    {
        printf("enter the diameter:\n");
        scanf("%f", &diameter);
        radius = diameter / 2.0;
    }
    else if (i < 1 or i > 2)
    {
        printf("error occured");
        return 0;
    }

    printf("what is the x coordinate of the centerpoint?\n");
    scanf("%f", &centerpointx);

    printf("what is the y coordinate of the centerpoint?\n");
    scanf("%f", &centerpointy);

    //if (holeCount < 3);
    //{
    //	printf("error occured: holeCount value min exceeded");
    //	return 0;
    //};
    //if (holeCount > 12)
    //{
    //	printf("error occured: holeCount value max exceeded");
    //};
    if (holeCount == 3)
    {
        a = diameter * 0.25;
        b = diameter * 0.43301;
        c = diameter * 0.86603;

        hole1x = centerpointx;
        hole2x = centerpointx + b;
        hole3x = hole2x + c;

        hole1y = centerpointy + radius;
        hole2y = centerpointy - a;
        hole3y = centerpointy -a;

        printf("point1: x = %f & y = %f \n point2: x = %f & y = %f", hole1x, hole1y, hole2x, hole2y);
        printf("\n point3: x= %f & y = %f", hole3x, hole3y);
    }
    if (holeCount == 5)
    {
        a = diameter * 0.18164;
        b = diameter * 0.55902;
        c = diameter * 0.40451;
        d = diameter * 0.29389;

        hole1x = centerpointx;
        hole2x = centerpointx + d + a;
        hole3x = centerpointx + d;
        hole4x = centerpointx - d;
        hole5x = centerpointx - a - d;

        hole1y = centerpointy + radius;
        hole2y = centerpointy - c + b;
        hole3y = centerpointy - c;
        hole4y = hole3y;
        hole5y = hole2y;

        printf("point1: x = %f & y = %f\n", hole1x, hole1y);
        printf("point2: x = %f & y = %f\n", hole2x, hole2y);
        printf("point3: x = %f & y = %f\n", hole3x, hole3y);
        printf("point4: x = %f & y = %f\n", hole4x, hole4y);
        printf("point5: x = %f & y = %f\n", hole5x, hole5y);
    }
    if (holeCount == 6)
    {
        a = diameter * 0.43301;
        b = diameter * 0.25;
        c = diameter * 0.5;

        hole1x = centerpointx;
        hole2x = centerpointx + a;
        hole3x = hole2x;
        hole4x = centerpointx;
        hole5x = centerpointx - a;
        hole6x = hole5x;

        hole1y = centerpointy + radius;
        hole2y = centerpointy - radius + b + c;
        hole3y = centerpointy - radius + b;
        hole4y = centerpointy - radius;
        hole5y = hole3y;
        hole6y = hole2y;

        printf("point1: x = %f & y = %f\n", hole1x, hole1y);
        printf("point2: x = %f & y = %f\n", hole2x, hole2y);
        printf("point3: x = %f & y = %f\n", hole3x, hole3y);
        printf("point4: x = %f & y = %f\n", hole4x, hole4y);
        printf("point5: x = %f & y = %f\n", hole5x, hole5y);
        printf("point6: x = %f & y = %f\n", hole6x, hole6y);
    }
    if (holeCount == 7)
    {
        a = diameter * 0.27052;
        b = diameter * 0.33922;
        c = diameter * 0.45049;
        d = diameter * 0.21694;
        e = diameter * 0.31175;
        f = diameter  * 0.39092;

        hole1x = centerpointx;
        hole2x = centerpointx + f;
        hole3x = centerpointx + d + a;
        hole4x = centerpointx + d;
        hole5x = centerpointx - d;
        hole6x = centerpointx - d -a;
        hole7x = centerpointx - f;

        hole1y = centerpointy + radius;
        hole2y = centerpointy + e;
        hole3y = centerpointy - c + b;
        hole4y = centerpointy - c;
        hole5y = hole4y;
        hole6y = hole3y;
        hole7y = hole2y;


        printf("point1: x = %f & y = %f\n", hole1x, hole1y);
        printf("point2: x = %f & y = %f\n", hole2x, hole2y);
        printf("point3: x = %f & y = %f\n", hole3x, hole3y);
        printf("point4: x = %f & y = %f\n", hole4x, hole4y);
        printf("point5: x = %f & y = %f\n", hole5x, hole5y);
        printf("point6: x = %f & y = %f\n", hole6x, hole6y);
        printf("point7: x = %f & y = %f\n", hole7x, hole7y);

    }
    if (holeCount == 8)
    {
        a = diameter * 0.27059;
        b = diameter * 0.27059;
        c = diameter * 0.46194;
        d = diameter * 0.19134;

        hole1x = centerpointx + d;
        hole2x = centerpointx + d + a;
        hole3x = hole2x;
        hole4x = hole1x;
        hole5x = centerpointx - d;
        hole6x = centerpointx - d - a;
        hole7x = hole6x;
        hole8x = hole5x;

        hole1y = centerpointy + c;
        hole2y = centerpointy + c - b;
        hole3y = centerpointy - c + b;
        hole4y = centerpointy - c;
        hole5y = hole4y;
        hole6y = hole3y;
        hole7y = hole2y;
        hole8y = hole1y;

        printf("point1: x = %f & y = %f\n", hole1x, hole1y);
        printf("point2: x = %f & y = %f\n", hole2x, hole2y);
        printf("point3: x = %f & y = %f\n", hole3x, hole3y);
        printf("point4: x = %f & y = %f\n", hole4x, hole4y);
        printf("point5: x = %f & y = %f\n", hole5x, hole5y);
        printf("point6: x = %f & y = %f\n", hole6x, hole6y);
        printf("point7: x = %f & y = %f\n", hole7x, hole7y);
        printf("point8: x = %f & y = %f\n", hole8x, hole8y);

    }
    if (holeCount == 9)
    {
        a = 0.46985;
        b = 0.17101;
        c = 0.26201;
        d = 0.21985;
        e = 0.38302;
        f  = 0.32139;
        g = 0.17101;
        h = 0.29620;

        hole1x = centerpointx;
        hole2x = centerpointx + f;
        hole3x = centerpointx + f + g;
        hole4x = centerpointx + b + c;
        hole5x = centerpointx + b;
        hole6x = centerpointx - b;
        hole7x = centerpointx - b -c;
        hole8x = centerpointx - f - g;
        hole9x = centerpointx - f;

        hole1y = centerpointy + radius;
        hole2y = centerpointy + e;
        hole3y = centerpointy + e - h;
        hole4y = centerpointy - a + d;
        hole5y = centerpointy -a;
        hole6y = hole5y;
        hole7y = hole4y;
        hole8y = hole3y;
        hole9y = hole2y;


        printf("point1: x = %f & y = %f\n", hole1x, hole1y);
        printf("point2: x = %f & y = %f\n", hole2x, hole2y);
        printf("point3: x = %f & y = %f\n", hole3x, hole3y);
        printf("point4: x = %f & y = %f\n", hole4x, hole4y);
        printf("point5: x = %f & y = %f\n", hole5x, hole5y);
        printf("point6: x = %f & y = %f\n", hole6x, hole6y);
        printf("point7: x = %f & y = %f\n", hole7x, hole7y);
        printf("point8: x = %f & y = %f\n", hole8x, hole8y);
        printf("point9: x = %f & y = %f\n", hole9x, hole9y);

    }
    if (holeCount == 10)
    {
        a = 0.29389;
        b = 0.09549;
        c = 0.18164;
        d = 0.25;
        e = 0.151451;

        hole1x = centerpointx;
        hole2x = centerpointx + a;
        hole3x = centerpointx + a + c;
        hole4x = hole3x;
        hole5x = hole2x;
        hole6x = hole1x;
        hole7x = centerpointx - a;
        hole8x = centerpointx - a - c;
        hole9x = hole8x;
        hole10x = hole7x;

        hole1y = centerpointy + radius;
        hole2y = centerpointy + e + d;
        hole3y = centerpointy + e;
        hole4y = centerpointy - e;
        hole5y = centerpointy - e - d;
        hole6y = centerpointy - radius;
        hole7y = hole5y;
        hole8y = hole4y;
        hole9y = hole3y;
        hole10y = hole2y;


        printf("point1: x = %f & y = %f\n", hole1x, hole1y);
        printf("point2: x = %f & y = %f\n", hole2x, hole2y);
        printf("point3: x = %f & y = %f\n", hole3x, hole3y);
        printf("point4: x = %f & y = %f\n", hole4x, hole4y);
        printf("point5: x = %f & y = %f\n", hole5x, hole5y);
        printf("point6: x = %f & y = %f\n", hole6x, hole6y);
        printf("point7: x = %f & y = %f\n", hole7x, hole7y);
        printf("point8: x = %f & y = %f\n", hole8x, hole8y);
        printf("point9: x = %f & y = %f\n", hole9x, hole9y);
        printf("point10: x= %f & y + %f\n", hole10x, hole10y);

    }
    if (holeCount == 11)
    {

    }

    return 1;
};
