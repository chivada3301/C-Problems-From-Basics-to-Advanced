#include<stdio.h>

int main(){

    //variables declaration
    char name[50];
    int age;
    char city[50];
    char country[50];
    int month_salary;
    char yearly_salary[50];
    char gender[50];
    char relationship_statu[50];

//--------------
printf("enter your name");
scanf("%s", name);
printf("enter your age\n");
scanf("%d", &age);
printf("enter your city name\n");
scanf("%s",city);
printf("enter your country name\n");
scanf("%s",country);
printf("enter your month salary\n");
scanf("%d", &month_salary);
printf("enter your yearly salary\n");
scanf("%s",yearly_salary);
printf("enter your gender\n");
scanf("%s",gender);
printf("enter your realationship statu (single or married)\n");
scanf("%s",relationship_statu);

//--------------
printf("your name is %s\n");
printf("your age is %d\n",age);
printf("your city name is %s\n");
printf("your country name is %s\n");
printf("your monthly salary is %d\n");
printf("your yearly salary is %s\n");
printf("your gender is %s\n");
printf("you are single");


    return 0;
}
