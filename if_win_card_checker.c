#include<stdio.h>

int main()
{
  int code = 19990;

  printf("enter the code \n");
  scanf("%d", &code);

    if (code == 19990)
    {
      printf("you win the card"); 
    }
    else
    {
      printf("You did not win,better luck next time.");
    }      

    return 0;

}
