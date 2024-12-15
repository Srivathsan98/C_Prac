/*1. print in table format*/
#include <stdio.h>

void main()
{
    char charac = 'a';
    char x;
    int a;
    // char y = 150;
    printf("ascii of character %c is %d\n", charac, charac);
    charac++;
    printf("ascii of character %c is %d\n", charac, charac);

    printf("enter a character:");
    scanf("%c", &x);
    printf("ascii of character %c is %d\n", x, x);

    printf("enter a value:");
    scanf("%d", &a);
    if(a <=127)
    {
        printf("ascii of value %d is %c\n", a, a);
    }
    else
    {
        printf("not in ascii value range. give within 127\n");
    }

    // printf("ascii of character %c is %u\n", y, y);

    printf("do you want to print ascii table?(y/n) ");
    scanf(" %c", &x);
    if(x == 'y')
    {
        printf("All ASCII values\n");
        printf("Char | Dec | Hex | Oct |\n");

        for(int i = 0; i <=127 ; i++)
        {
            if(i>=32 && i <=127 )
            {
                printf(" %c | %d | %x | %o", i, i, i, i);
                printf("\n");
            }
            else
            {
                printf(" NA | %d | %x | %o", i,i,i);
                printf("\n");
            }
        }
    }
    else
    {
        return;
    }
    

}