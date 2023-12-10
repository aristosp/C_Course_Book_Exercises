/*
Write a program that has as inputs three user defined resistor values 
and returns the total in case the resistors are serial or in parallel
*/


#include <stdio.h>

int main(){
    float r1, r2, r3, rs;
    float rp;
    printf("Type the three resistor values: \n");
    scanf("%f %f %f", &r1, &r2, &r3); // Save each resistor value to a variable
    rs = r1 + r2 + r3; // Series resistor formula
    rp = (r1 + r2 + r3) / ((r1 * r2) + (r2 * r3) + (r1 * r3)); // Parallel Resistor formula

    printf("Series Resistor: %f \n", rs);
    printf("Parallel Resistor: %f \n", rp);
}