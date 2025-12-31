/*
the result:
1
22
333
· · ·
nn···n
*/

#include<stdio.h>
int main()
{
    
    int n;
    int i=1;
    scanf("%d", &n);

    
    while (i<=n)
    {
    
        
        for (int k = 0; k < i;k++)
        {
          printf("%d",i);
        }
        
        printf("\n"); 
        i++;
        
    }
    
    return 0;
}
