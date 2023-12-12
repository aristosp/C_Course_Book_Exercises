/*
Write a program that asks the value of a circle's radius and using 
three different functions it computes:
a. the diameter b. the length of circumference c. the circle's acreage
Then the results are displayed.
*/
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

float diameter(float x){
    return 2*x; // Diameter = 2 times its radius
}

float circumference(float x){
    return 2 * M_PI * x; // Circumference is 2 * pi * r
}

float acreage (float x){
    return M_PI * x * x; // Area is pi * r^2
}

int main(){
    float radius;
    printf("Type circle's radius in cm\n");
    scanf("%f", &radius);
    // Print the results
    printf("For a circle with radius: %f\n", radius);
    printf("The diameter is %f \n", diameter(radius));
    printf("The circumference is %f \n", circumference(radius));
    printf("The area is %f \n", acreage(radius));
}