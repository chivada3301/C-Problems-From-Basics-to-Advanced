#include<stdio.h>
int main()
{
    
    float m ,n ,A ,P ;

    printf("please enter the first num n = ");
    scanf("%f", &n);

    printf("please the second num m = ");
    scanf("%f", &m);

    A=(n+m)/2;
    P=n*m;

    printf("the average of n and m is =%f \n",A);
    printf("the product of n and m is =%f \n",P);

    return 0;

    /*c program to compute the average and sum of two numbers*/
}
