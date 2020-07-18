#include<stdio.h>
int main()
{
int ch;
printf("Welcome to KFC\n");
printf("MENU\n 1. CHICKEN POPCORN \n 2. ZINGER BURGER\n 3. CHOCOLASH\n 4. CHICKEN WINGS\n 5. CHICKEN RICEBOWL\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Food item: Chicken popcorn\n Price: Rs 99");
Break;
case 2:
printf("Food item: Zinger Burger\n Price: Rs 150");
Break;
case 3:
printf("Food item: Chocolash\n Price: Rs 99");
Break;
case 4:
printf("Food item: Chicken wings\n Price: Rs 249");
Break;
case 5:
printf("Food item: Chicken Ricebowl\n Price: Rs 165");
Break;
default:
printf("Invalid Choice");
}
return 0;
}
