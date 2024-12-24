#include "string.h"

void main()
{

    printf("enter str1:");
    // scanf("%s", str1);
    str1 = stringcreate();
    printf("enter str2:");
    scanf("%s", str2);
    printf("enter what to do:\n1.concate\n2.add str binary\n3.nonrepeat\n4.palindrome\n5.reverse\
    \n6.recurserev\n7.comapre\n8.sortstr\n9.pangram\n10.firstword\n11.nonzeros\n12.unicode\n");
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
    else if(option == 3)
    {
        resstr = nonrepeatcharac(str1);
        printf("%s\n", resstr);
    }
    else if(option == 4)
    {
        check = palindrome(str1);
        printf("str1 is %s", (check == 1) ? "true" : "false");
    }
    else if(option == 5)
    {
        resstr = reverse(str1);
        printf("%s\n", resstr);
    }
    else if(option == 6)
    {
        resstr = rev(str1);
        printf("%s\n", resstr);
    }
    else if(option == 7)
    {
        value = compare(str1, str2);
        printf("value = %d and status = %s\n", value, (value == 1 || value == -1) ? "noteq" : "equal");
    }
    else if (option == 8)
    {
        printf("Enter number of elements: ");
        scanf("%d", &value);

        // Allocate memory for an array of string pointers
        char **arr = (char **)malloc(value * sizeof(char *));

        for (int i = 0; i < value; i++)
        {
            // Allocate memory for each string
            arr[i] = (char *)malloc(100 * sizeof(char)); // Assuming max string length is 99
            printf("Enter string %d: ", i + 1);
            scanf("%s", arr[i]); // Store the string in allocated memory
        }

        // Sort the array of strings
        sort(arr, value);

        // Print the sorted strings
        for (int i = 0; i < value; i++)
        {
            printf("%d: %s\n", i, arr[i]);
            free(arr[i]); // Free each string's memory
        }

        free(arr); // Free the array of pointers
    }
    else if(option == 9)
    {
        check = pangram(str1);
        printf("str1 is %s", (check == 1) ? "true" : "false");
    }
    else if(option == 10)
    {
        resstr = firstword(str1);
        printf("%s\n", resstr);
    }
    else if(option == 11)
    {
        nonzeros(str2);
    }
    else if(option == 12)
    {
        unicode(str2);
    }
    else if(option == 13)
    {
        char *d = ",";
        split(str1, d);
    }
}