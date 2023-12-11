/*
An object is let go from quiescence to free fall, the following types apply:
    Distance is equal to: x = (1/2) * g * t^2
    Velocity is equal to: v = g * t
    Write a program that calculates those two variables with an accuracy of 3 digits, after t = 12 seconds,
    given that g = 9.81 m/s^2
*/

#include <stdio.h>

// Function that computes the velocity
float velocity(float g, float t)
{
    return g * t;
}

// Function that computes the distance
float distance(float g, float t)
{
    return (0.5 * g * t * t);
}

int main()
{
    float t = 12.0;
    float g = 9.81;
    float v = velocity(g, t);
    float x = distance(g, t);
    // Compute and return distance and velocity in the time given.
    printf("Velocity is: %.3f \n", v);
    printf("Distance is: %.3f \n", x);
}