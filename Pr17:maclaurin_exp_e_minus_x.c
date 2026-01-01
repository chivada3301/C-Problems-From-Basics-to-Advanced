// a C program that calculates and displays the value of maclurin serie (e^(-x))

#include<stdio.h>
#include<math.h>

//the factorial function
int fact(int n)
{
 int Fact=1;

   for (int i = 1; i <=n; i++)
   {
    Fact=Fact*i;
   }


 return Fact;  
}

//the begin of opperation

int main()
{
 int n;
 float sum=1,fraction,numerator,denominator,x;

 printf("enter the value of x to calculate the  maclurin serie (e^(-x)) \n");
 scanf("%f", &x);

   for (int n = 0; n <= 9; n++)
   {
     numerator=pow(-1,n);
     denominator=fact(n);
     fraction=(numerator/denominator)*pow(x,n);
     sum=sum+fraction;
   }
 
 printf("the  maclurin serie (e^(-x)) of%.1f is %.1f",x,sum);
 
 return 0;
}
