#include "operations.h"

// char* binadd(char s1[], char s2[])
// {
//     // char s3[100];

//     int carry = 0, temp, n1, n2;

//     int l1 = strlen(s1);
//     int l2 = strlen(s2);
//     int max_len = (l1 > l2 ? l1 : l2) + 1; // Maximum possible length of result
//     char* s3 = (char*)malloc(max_len + 1); // Allocate memory for result
//     s3[max_len] = '\0';

//     s3[l1 + 1] = '\0';

//     while(l2 > 0)
//     {
//         n1 = s1[l1 - 1] - '0';
//         n2 = s2[l2 - 1] - '0';
//         temp = n1 + n2 + carry;
//         carry = 0;
//         if(temp >= 2)
//         {
//             carry = 1;
//             temp = temp % 2;
//         }
//         s3[max_len - 1] = temp + '0';
//         l1--;
//         l2--;
//         max_len--;
//     }

//     if(carry == 0)
//     {
//         s3[0] = '1';
//     }
//     else
//     {
//         for(int i = 0; i < strlen(s3); i++)
//         {
//             s3[i] = s3[i + 1];
//         }
//         s3[strlen(s3) - 1] = '\0';
//     }
//     return s3;
// }
char* binadd(char s1[], char s2[]) {
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    int max_len = (l1 > l2 ? l1 : l2) + 1; // Maximum possible length of result
    char* s3 = (char*)malloc(max_len + 1); // Allocate memory for result
    s3[max_len] = '\0'; // Null-terminate the string

    int carry = 0, temp;
    int i = l1 - 1, j = l2 - 1, k = max_len - 1;

    // Process both strings from the end
    while (i >= 0 || j >= 0 || carry) {
        int n1 = (i >= 0) ? s1[i--] - '0' : 0;
        int n2 = (j >= 0) ? s2[j--] - '0' : 0;

        temp = n1 + n2 + carry;
        carry = temp / 2;
        s3[k--] = (temp % 2) + '0';
    }

    // If the result starts with '0', shift the string
    if (s3[0] == '0') {
        memmove(s3, s3 + 1, max_len);
    }

    return s3;
}