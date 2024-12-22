#include "rotation.h"

int rotate1by1(int arr[], int elements)
{
    int temp  = arr[0];
    for(int i = 0; i < elements; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[elements - 1] = temp;
}

int rotation(int arr[], int elements, int value)
{
    for(int i = 0; i < value; i++)
    {
        rotate1by1(arr, elements);
    }
}

int** matrixrotation(int** arr, int rows, int columns)
{
    int r = 0, c = 0;
    int prev, curr;

    while(r < rows && c < columns)
    {
        if(r + 1 == rows || c + 1 == columns)
        {
            break;
        }

        prev = arr[r + 1][c];
        printf("prev1 = %d\n", prev);
        printf("r = %d\tc=%d\trows=%d\tcols=%d\n", r, c, rows, columns);

        for(int i = c; i < columns; i++)
        {
            curr = arr[r][i];
            arr[r][i] = prev;
            prev = curr;
            printf("prev2 = %d\n", prev);
            printf("curr2 = %d\n", curr);
            printf("arr[r][i] = %d\n", arr[r][i]);
        }

        r++;
        printf("r = %d\tc=%d\trows=%d\tcols=%d\n", r, c, rows, columns);
        print2darray(arr, rows, columns);
        printf("\n\n");

        for(int j = r; j < rows; j++)
        {
            curr = arr[j][columns - 1];
            arr[j][columns - 1] = prev;
            prev = curr;
            printf("prev3 = %d\n", prev);
            printf("curr3 = %d\n", curr);
            printf("arr[j][columns - 1] = %d\n", arr[j][columns - 1]);
        }

        columns--;
        printf("r = %d\tc=%d\trows=%d\tcols=%d\n", r, c, rows, columns);
        print2darray(arr, rows, columns);
        printf("\n\n");

        if(r < rows)
        {
            for (int k = columns - 1; k >= c; k--)
            {
                curr = arr[rows - 1][k];
                arr[rows - 1][k] = prev;
                prev = curr;
                printf("prev4 = %d\n", prev);
                printf("curr4 = %d\n", curr);
                printf("arr[rows - 1][k] = %d\n", arr[rows - 1][k]);
            }
        }
        rows--;
        printf("r = %d\tc=%d\trows=%d\tcols=%d\n", r, c, rows, columns);
        print2darray(arr, rows, columns);
        printf("\n\n");

        if(c < columns)
        {
            for(int l = rows - 1; l >= r; l--)
            {
                curr = arr[l][c];
                arr[l][c] = prev;
                prev = curr;
                printf("prev5 = %d\n", prev);
                printf("curr5 = %d\n", curr);
                printf("arr[l][c] = %d\n", arr[l][c]);
            }
        }
        c++;
        printf("r = %d\tc=%d\trows=%d\tcols=%d\n", r, c, rows, columns);
        print2darray(arr, rows, columns);
        printf("\n\n");
    }
}