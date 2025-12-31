/* C program that calculates the product 
of two positive integers A and B, entered by the user
the program perform multiplication 
using only the addition operation*/

#include<stdio.h>
int main()
{
    
    int A,B,i=1,product=0;

    printf("enter the first num \n A:");
    scanf("%d", &A);
    printf("enter the second num \n B:");
    scanf("%d", &B);

    
    while (i<=B)
    {
        product=product+A;
        i++;
    }
    
    printf("%d*%d=%d",A,B,product);
    
    return 0;
    
}
