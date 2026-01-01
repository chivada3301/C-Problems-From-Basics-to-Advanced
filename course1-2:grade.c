// --- Problem #33 Grade A,B,C,D,E,F

#include<stdio.h>
int main(){
 // declaration 
 float n;
 printf("please enter your grade : ");
 scanf("%f", &n);

 // --- begin of opperation
 if (n<=100 && n>0)
 {
     
     if (n>=90 && n<=100)
     {
        printf("A");
     }
     
     else
     {
        if (n>=80 && n<=89)
        {
                printf("B");
        }
        else
        {
            if (n>=70 && n<=79)
            {
                    printf("C");
            }
            else
            {
                if (n>=60 && n<=69)
                {
                    printf("D");
                }
                else
                {
                    if (n>=50 && n<=59)
                    {
                        printf("E");
                    }
                    else
                    {
                        printf("F");
                    }
                    
                }
                
            }
            
        }
        
     }
     
 }

 
 else
 {
    printf("invalid grade");
 }
 
// --- end of opperation
    return 0;
}
