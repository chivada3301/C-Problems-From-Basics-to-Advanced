/*
*description:a simple c code to calculate PGCD between 2 integers

/* the role of variables:
i : we use it as modulus for the reminder
a,b : the integers whose we looking for there pgcd 
pgcd: store the value of dreatest common divisor*/


#include<stdio.h>
int main()
{
    
    
    
    // --- declaration of variables ---
    
    int i=1;
    int a,b,pgcd;
    
    // --- beginning of the code ---
    
    printf("enter two integers to calculate there pgcd \n");
    scanf("%d", &a);
    scanf("%d", &b);

    
    while (i<=a && i<=b)
    {
        
        if (a%i==0 && b%i==0)
        {
          pgcd=i;
        }

        i++;

    }

    
    printf("the PGCD between %d and %d is %d",a,b,pgcd);
    
    // --- The end of the code ---
    return 0;
}
