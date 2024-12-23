#include "string.h"

void main()
{

    printf("enter str1:");
    scanf("%s", str1);
    printf("enter str2:");
    scanf("%s", str2);
    printf("enter what to do:\n1.concate\n");
    scanf("%d", &option);

    if(option == 1)
    {
        resstr = concat(str1, str2);
        printf("concate str = %s", resstr);
    }
    else if(option == 2)
    {
        resstr = binadd(str1, str2);
        printf("%s + %s = %s", str1, str2, resstr);
    }
}