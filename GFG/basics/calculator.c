#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct complexnum
{
    int real;
    int img;
} complex;

complex add(complex x, complex y)
{
    complex eq;
    eq.real = x.real + y.real;
    eq.img = x.img + y.img;
    return eq;
}
int main()
{
    complex n, m, sum;
    int x, y, a, u;
    float z, w;
    printf("what to calculate\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Square\n6. Cube\n7. x^y\n8. sq root\n9. cuberoot\n10. percentage\n11. pythogoras\n12. complex sum\n13. rectangle area\n14. perimeter of rectangle\n15.simpleinterest\n16.compundinterest");
    scanf("%d", &a);
    if(a == 12)
    {
        printf("enter the realnos:\tn.real=");
        scanf("%d", &n.real);
        printf("m.real=");
        scanf("%d", &m.real);

        printf("enter the imgnos:\tn.img=");
        scanf("%d",&n.img);
        printf("m.img=");
        scanf("%d", &m.img);
    }
    else if(a == 15 || a == 16)
    {
        printf("enter 3 nos:\n");
        printf("x:");
        scanf("%d", &x);
        printf("\ny:");
        scanf("%d", &y);
        printf("\nu:");
        scanf("%d", &u);
    }
    else
    {
        printf("enter 2 nos:\n");
        printf("x:");
        scanf("%d", &x);
        printf("\ny:");
        scanf("%d", &y);
    }
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
        z = ((x * 100)  / y);
        break;
    case 11:
        z = sqrt((x^2) + (y^2));
        break;
    case 12:
        sum = add(n,m);
        break;
    case 13:
        z = x * y;
        break;
    case 14:
        z = 2 * (x + y);
        break;
    case 15:
        z = (x * y * u) / 100;
        break;
    case 16:
        z = x * ((pow((1 + (float)y / 100), u)));
        w = z - x;
        break;
    default:
        break;
    }
    printf("z = %f\n", z);
    printf("w = %f\n", w);
    printf("sum = %d + %di\n", sum.real, sum.img);
}