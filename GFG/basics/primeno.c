#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int prime(int a)
{
    int count = 0;
    bool prime = false;
    if(a <= 1)
    {
        printf("not a prime number\n");
    }
    if(a == 2)
    {
        printf("prime\n");
    }

    if(a % 2 == 0)
    {
        printf("even");
    }

    for (int i  = 3; i <= sqrt(a); i += 2)
    {
        if(a % i == 0)
        {
            prime = false;
        }
    }

    if(prime)
    {
        printf("%d is a prime", a);
    }
    else
    {
        printf("it is a prime\n");
    }
}
int main()
{
    int x, y;
    printf("enter a value:");
    scanf("%d", &x);

    prime(x);
}