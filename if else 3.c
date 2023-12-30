#include<stdio.h>
int main()
{
    float marks;
    printf("enter your marks");
    scanf("%f",&marks);

    if (marks>=80)
        printf("you got A+");
  else  if (marks>=70)
    printf("you got A");
 else   if (marks>=60)
        printf("you got A-");
  else  if (marks>=50)
        printf("you got B");

    else
       printf ("you are fail");


}
