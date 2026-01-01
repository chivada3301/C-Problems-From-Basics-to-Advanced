// A C program that calculates and displays the value of Maclaurin series for e^x

#include <stdio.h>
#include <math.h>

// Factorial function
int fact(int n)
{
    int Fact = 1;
    for (int i = 1; i <= n; i++)
    {
        Fact = Fact * i;
    }
    return Fact;
}

int main()
{
    int n;
    float sum = 0, fraction, x;

    printf("Enter the value of x to calculate e^x using Maclaurin series:\n");
    scanf("%f", &x);

    // Maclaurin expansion up to n=9 terms
    for (n = 0; n <= 9; n++)
    {
        fraction = pow(x, n) / fact(n);
        sum = sum + fraction;
    }

    printf("The Maclaurin series approximation of e^(%.1f) is %.4f\n", x, sum);

    return 0;
}
