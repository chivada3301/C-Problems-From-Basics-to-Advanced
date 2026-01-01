// --- Circle Area Inscribed in a Square ---
// This program calculates the area of a circle inscribed in a square
// Formula: Area = (π / 4) * A^2

#include <stdio.h>

// Function to calculate square of a number
int square(int x) {
    return x * x;
}

int main() {
    const double PI = 3.14;   // Constant value of π
    double side, area;

    printf("Enter the value of the side of the square: ");
    scanf("%lf", &side);

    // Calculation: area of inscribed circle
    area = 0.25 * PI * square(side);


    printf("The area of the inscribed circle is: %.2lf\n", area);

    return 0;
}
