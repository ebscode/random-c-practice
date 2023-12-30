#include<stdio.h>
int main()
{
    char ch;
    printf("enter any letter ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' ||ch=='i'||ch=='o'||ch=='u')
        printf("voule");
    else
        printf("consonant");
}
