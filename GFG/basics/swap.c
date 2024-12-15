#include <stdio.h>

void main()
{
    int x,y,z,a;

    printf("give 2 values x=");
    scanf("%d", &x);
    printf("y=");
    scanf("%d", &y);

    

    printf("xor or 2 variable or 3 variable swap?");
    scanf("%d", &a);
    if(a == 3)
    {
        z = x;
        x = y;
        y = z;
        printf("swapped nos using 3 variablesis x=%d, y=%d\n", x,y);
    }
    else if( a == 2)
    {
        x = x + y;
        y = x - y;
        x = x - y;
        printf("swapped nos using 2 variablesis x=%d, y=%d\n", x,y);
    }
    else if( a == 1)
    {
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
        printf("swapped nos using xor is x=%d, y=%d\n", x,y);
    }
    else
    {
        printf("wrong value give only 2 or 3\n");
        return;
    }
}

