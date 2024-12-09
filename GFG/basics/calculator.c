#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, z, a, w;
    printf("enter 2 nos:\n");
    printf("x:");
    scanf("%d", &x);
    printf("\ny:");
    scanf("%d", &y);
    printf("what to calculate\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Square\n6. Cube\n7. x^y\n8. sq root\n9. cuberoot\n10. percentage\n11. pythogoras\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        z = x + y;
        break;
    case 2:
        z = (x > y) ? (x - y) : (y - x);
        break;
    case 3:
        z = x * y;
        break;
    case 4:
        z = (x > y) ? (x / y) : (y / x);
        break;
    case 5:
        z = pow(x, 2);
        w = pow(y, 2);
        break;
    case 6:
        z = pow(x, 3);
        w = pow(y, 3);
        break;
    case 7:
        z = pow(x, y);
        w = pow(y, x);
        break;
    case 8:
        z = sqrt(x);
        w = sqrt(y);
        break;
    case 9:
        z = cbrt(x);
        w = cbrt(y);
        break;
    case 10:
        z = (x / y) * 100;
        break;
    case 11:
        z = sqrt((x^2) + (y^2));
        break;
    default:
        break;
    }
    printf("z = %d", z);
    printf("w = %d", w);
}