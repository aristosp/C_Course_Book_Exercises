/*
Write a program that computes the number of seconds in a century.
(Consider a year with 365 days.)
*/

#include <stdio.h>

int main(){
    int days = 365, years = 100, hours = 24, seconds = 60;
    long int total; // Long int as simple int will overflow
    total = years * days * hours * seconds; // Compute
    printf("The total seconds of a century are: %ld", total);
}