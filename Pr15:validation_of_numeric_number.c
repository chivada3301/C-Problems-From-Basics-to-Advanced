/*
A numeric code is onsidered (valid)if it satisfies all of the following conditions:
*the code is composed of exactly 6 digits
*the code contains at least one even digit
*the sum of its digits is divisible by 3
*/


#include<stdio.h>
int main()
{
 int counter=1,n,N,original,digit,sum=0,iseven=-1;

 // initial input attempt for a to enter a number
  printf("enter a positive integer: ");
  scanf("%d",&n);

 // cheching if the the entered number is strictly positive
    while (n<=0)
    {
     printf("invalid input , please try again with a positive integer: ");
     scanf("%d",&n);
    }
   original=n;
  //cheking if the code is composed of exactly 6 digits

  //1-counting digits
   N=n;
    while(N/10 != 0)
    {
     N=N/10; 
     counter=counter+1;
    }
  //2-cheking if number composed of exactly 6 digits
    if (counter==6)
    {

     //cheking if the code contains at least one even digit
     while (n>0)
     {
       
       digit=n%10;
       n=n/10;
       sum=sum+digit;
 
       if (digit%2==0)
       {
        iseven=1;
       }

     }

      if (iseven==1)
      {
 
        //cheking if the sum of its digits is divisible by 3
       if (sum%3==0)
       {
         printf("%d is a valid code",original);
       }

       else
       {
        printf("%d is invalid code because the sum of its digits is divisible by 3",original);
       }

      }
  

      else
      {
       printf("%d is invalid code because the number not contains at least one even digit",original);

      }
  


    }
    else
    {
     printf("%d is invalid code because the number of digits of the number that you entered are not 6",original);

    }
    
 return 0; 

}
