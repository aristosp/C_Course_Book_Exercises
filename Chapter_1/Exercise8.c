/*
Write a program that uses as inputs the coordinates of (XA, YA) and (XB, YB) of two vertices
of a right triangle, with C as the right angle and that calculates the hypotenuse, if AC is parallel with x-axis. 
*/
#include <stdio.h>
#include <math.h>

// Pythagoras theorem
float hypotenuse_calc(float x1, float x2, float y1, float y2){
    return sqrt(((x2 - x1) * (x2 - x1)) - ((y2 - y1) * (y2 - y1)));
}

int main(){
    // Storing each coordinate
    float xa, ya, xb, yb, hyp;
    printf("Give coordinates for point A:\n");
    scanf("%f %f", &xa, &ya);
    printf("Give coordinates for point B:\n");
    scanf("%f %f", &xb, &yb);
    
    hyp = hypotenuse_calc(xa, xb, ya, yb);
    // Calculating and returning the hypotenuse
    printf("The Hypotenuse is : %f\n", hyp);
}