// a C program that calculates and displays the value of the expression:(1+x)^(-1/2)

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
 float sum=0,fraction,numerator,denominator,x;

 printf("enter the value of x to calculate the expression:(1+x)^(-1/2) \n");
 scanf("%f", &x);

   for (int n = 0; n <= 5; n++)
   {
     numerator=pow(-1,n)*fact(2*n);
     denominator=pow(4,n)*pow(fact(n),2);
     fraction=(numerator/denominator)*pow(x,n);
     sum=sum+fraction;
   }
 
 printf("the expression:(1+%.1f)^(-1/2)=%.1f",x,sum);
 
 return 0;
}
