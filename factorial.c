#include<stdio.h>
int main()
{
    
    int n,c;

    printf("enter a naturel num n: \n");
    scanf("%d", &n);

    int i=1;
    while (i<n)
    {
        c=n*i;
        i++;
    }
    
    printf("%d!=%d \n",n,c);

/*this is a C code that displays the factorial of a natural
 number entered by the user*/

    return 0;
}
