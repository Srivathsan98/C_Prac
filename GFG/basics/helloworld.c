#include <stdio.h>
#include <string.h>
#include <unistd.h>

void main()
{
    printf("Hello World\n");
    puts("Hello World\n");
    write(1, "Hello World\n", sizeof("Hello World\n"));
    char *str = "Hello World\n";
    char *str2 = str;
    while(*str)
    {
        putchar(*str++);
    }
    write(STDOUT_FILENO, str, strlen(str));//this will not print as the putchar has already incremented the value of str to /0 or nullptr.
    write(STDOUT_FILENO, str2, strlen(str2));//this will print because we have stored the copy of str in another variable.
}