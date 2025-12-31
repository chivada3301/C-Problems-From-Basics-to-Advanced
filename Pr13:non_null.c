/*the exo : Write a C program that checks whether 
a non-null natural number is perfect or not
A natural number is considered perfect if it is equal
 to the sum of its positive divisors excluding itself*/

#include<stdio.h>
int main()
{

    //----declaration--------------
    int n,i;
    int sumdivisors=0;
    //---------------------

     printf("enter a number to check if it is a pefect number or not \n");
     scanf("%d", &n);

     
     for (int i = 1; i <=n/2; i++)
     {
         
         if(n%i==0)
         {
             sumdivisors=sumdivisors+i;
         }
         
     }

     
     if (n==sumdivisors)
     {
         printf("%d is perfect number",n);
     }
     else
     {
        printf("%d is not perfect number",n);

     }

    return 0;

}
