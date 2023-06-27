#include <stdio.h>
#include <math.h>

// compile with:
// gcc midpoint.c -lm
// we need to compile with the math library "libm"

double distanceToMidpoint(double x, double y) {
    x /= 2.0;
    y /= 2.0;
    return sqrt(x*x + y*y);
}

int main(void) {
    double x, y, result;
    x = 3;
    y = 4;

    result = distanceToMidpoint(x, y); // this modifies the values of x and y!
    printf("The distance is: %f \n", result);
    return 0;
}
