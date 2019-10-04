#include <stdio.h>
#include <math.h>
// The purpose of this program is to calculate the length of hypotenuse
// of a right triangle.
int main (void) {
    float leg1, leg2, hypotenuse;
    // input the lengths of leg1 and leg2
    printf("Enter the length of side A\n");
    scanf("%f", &leg1);
    printf("\nEnter the length of side B: \n");
    scanf("%f", &leg2);
    // calculate the hypotenuse
    hypotenuse = sqrtf( leg1 * leg1 + leg2 * leg2 );
    // display the length of the hypotenuse with 2 decimal places
    printf("The hypotenuse is %.2f\n", hypotenuse);
} // end main function
