#include "stringcreate.h"

char* stringcreate()
{
    int ch;
char *str = NULL;
size_t len = 0;
    while((ch = getchar()) != '\n' && ch != EOF)
    {
        char *temp = realloc(str, len + 2);
        if(!temp)
        {
            exit(0);
        }
        str = temp;
        str[len++] = ch;
    }
    if(str)
    {
        str[len] = '\0';
    }
    else
    {
        str = malloc(1);
        str[0] = '\0';
    }
    return str;
}

