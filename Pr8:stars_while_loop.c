/*

the result:
*
**
***
.
.
****....* n times

*/
#include<stdio.h>
int main()
{
    
    int n;
    int i=1;
    printf("enter a number please \n");
    scanf("%d", &n);

    
    while (i<=n)
    {
        
        for (int k = 0; k < i;k++)
        {
             printf("*");
        }
        printf("\n"); 
        i++;
    }
 

    return 0;
}
