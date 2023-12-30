#include<stdio.h>
int main()
{
    char ch;
    printf("neter letter ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a': printf("vowel\n");
        case 'e' :
        case 'i': printf("vowel\n");
        break ;

        case 'o': printf("vowel\n");
        break;
        case 'u': printf("vowel\n");
        break ;
        case 'A': printf("vowel\n");
        break;
        case 'E': printf("vowel\n");
        break ;
        case 'I': printf("vowel\n");
        break;
        case 'O': printf("vowel\n");
        break ;
        case 'U': printf("vowel\n");


        default : printf("consonant");




    }


}
