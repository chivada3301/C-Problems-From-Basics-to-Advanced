#include<stdio.h>
int main()
{
    
    float a,b,c;
    scanf("%f %f", &a,&c);
    b=c;
    c=a;
    a=b;
    printf("a=%f c=%f",a,c);


    return 0;
    /*
    C program that allows reading two numbers,swaps their values
    and displays the new values of both them
    */
}
