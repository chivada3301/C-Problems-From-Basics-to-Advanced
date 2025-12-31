
#include<stdio.h>
int main()
{
  
  int n,max,min,product;
  float avr,repeat,sum;
  
  printf("Enter the number of repetitions, or rather, the number of digits you will enter \n");
  scanf("%f", &repeat);

  
  do
  {
    
  printf("enter a number \n");
  scanf("%d", &n);
  } while (n<=0);

  
  //max of nums 
  max=n;
  min=n;
  product=n;
  sum=n;

  
  for (int i = 2; i <=repeat; i++)
  {
      scanf("%d", &n);
        if (n>max)
        {
          max=n;
        }
      
  
  //min of nums 
     
        if (n<min)
        {
          min=n;
        } 
  
  //average of nums
   
        sum=sum+n;
    
  //product of nums
     
        product=product*n;
      i++;
  }

  
  avr=((float)sum/repeat);
  printf("the max is %d \n",max);
  printf("the min is %d \n",min);
  printf("the average is % .2f \n",avr);
  printf("the product is %d \n",product);


    return 0;

}
