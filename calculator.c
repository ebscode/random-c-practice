#include<stdio.h>
int main()
{
    double num1,num2;
    char op;
    printf("select operator +,-,*,/");
    scanf("%c",&op);
    printf("enter number ");
    scanf("%lf %lf ",&num1,&num2);

    switch(op)
{


    case '+':

        {printf("%lf+%lf=%lf\n",num1,num2,num1+num2);
        break;
    }

    case '_':

       {

        printf("%lf_%lf=%lf",num1,num2,num1-num2);
        break ;

    }

    case '*' :
        {printf("%lf*%lf=%lf\n",num1,num2,num1*num2);
        break;

    }

    case '/' :
       {

        printf("%lf/%lf=%lf",num1,num2,num1/num2);
        break;
    }
}
}
