/*

the result:
       *
      **
     ***
       .
       .
********

*/
#include<stdio.h>
int main()
{
    
    int i,x,y,n;
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        for (int x = 1; x <=n-i; x++)
        {
            printf(" ");
           
        }
        
        for (int y = 1; y <=i ; y++)
        {
            printf("*");
            
        }
            printf("\n");
            
    }
    
    return 0;
}
