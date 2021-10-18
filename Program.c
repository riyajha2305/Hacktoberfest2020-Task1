#include <stdio.h>

int main()
{
    char name[20],country[20],skill;
    int age;
    printf("Welcome to Hacktoberfest 2020\n");
    printf("Enter your name : ");//Get User name
    scanf("%s",name);
    printf("\n");
    printf("Enter your Country of Residence : ");//Get user country
    scanf("%s",country);
    printf("\n");
    printf("Enter your Age : ");//Get user Age
    scanf("%d",&age);
    printf("\n");
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest : ");//Get user skill level
    scanf(" %c",&skill);
    printf("\n");
    printf("Thank you %s Happy Hacking\n",name);//Thank the user

    return 0;
}
