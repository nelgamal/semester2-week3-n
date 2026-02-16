
/*
 * Compute the roots of quadratic equation.
 * We will assume that 2 real roots exist at this point.
 * The equation is specified with 3 real constants a,b,c
 *    a.x^2 + b.x + c = 0
 */

#include <stdio.h>
#include <math.h>

int main( void ) {

    float a = 2.0;
    float b = 5.0;
    float c = -3.0;
    float root1, root2;
    float discriminant; 

    /*
     * Implement the formula for the 2 roots of a quadratic.
     * You can define additional variable for intermediate results to make the code simpler.
     * Print out the final results for the 2 roots as float values.
     */

    discriminant = b*b - 4*a*c;
    root1 = (-b + sqrt(discriminant)) / (2*a);
    root2 = (-b - sqrt(discriminant)) / (2*a);

    printf("Root 1 = %f\n", root1);
    printf("Root 2 = %f\n", root2);

    return 0;
}
