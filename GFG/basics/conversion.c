#include <stdio.h>

float F2C(float farenheit)
{
    float celcius;
    celcius = ((farenheit -32) * 5 / 9);
    return celcius;
    // printf("celcius is %f\n", celcius);
}

float C2F(float celcius)
{
    float farenheit;
    farenheit = ((celcius * 9 / 5) + 32);
    return farenheit;
    // printf("celcius is %f\n", celcius);
}
void main()
{
    float farenheit, celcius;
    int a;
    int b;
    printf("enter type of conversion\n1. farenheit2celcius\n2.celcius2farenheit\n");
    scanf("%d", &a);
    if(a == 1)
    {
        printf("enter the farenheit");
        scanf("%f", &farenheit);
        celcius = F2C(farenheit);
        printf("celcius is %f\n", celcius);
    }
    else if(a == 2)
    {
        printf("enter the celcius");
        scanf("%f", &celcius);
        farenheit = C2F(celcius);
        printf("farenheit is %f\n", farenheit);
    }

    printf("%u", sizeof(int));
}