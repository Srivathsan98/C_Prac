#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


bool prime(int a)
{
    int count = 0;
    bool prime = false;
    if(a <= 1)
    {
        // printf("not a prime number\n");
        return false;
    }
    if(a == 2)
    {
        // printf("prime\n");
        return true;
    }

    if(a % 2 == 0)
    {
        // printf("even");
        return false;
    }

    for (int i  = 3; i <= sqrt(a); i += 2)
    {
        if(a % i == 0)
        {
            prime = false;
            return false;
        }
        else
        {
            printf("%d is a prime\n", a);
            return true;
        }
    }

    // if(prime)
    // {
    //     printf("%d is a prime", a);
    //     return true;
    // }
    // else
    // {
    //     // printf("it is not a prime\n");
    //     return false;
    // }
}

int listprime(int y)
{
    int x, j;
    for (int i = 1; i <=y; i++)
    {
        if(prime(i) == true)
        {
            printf("%d\t", i);
        }
        // if(x != 0)
        // {
        //     j++;
        // }
    }
    // printf("no of prime nos  = %d\n", j);
}
int main()
{
    int x, y;
    printf("enter a value:");
    scanf("%d", &x);

    prime(x);
    listprime(x);
}