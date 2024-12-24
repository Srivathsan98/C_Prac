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
        printf("n1 = %d\n", n1);
        int n2 = (j >= 0) ? s2[j--] - '0' : 0;
        printf("n2 = %d\n", n2);
        printf("cary = %d\n", carry);
        temp = n1 + n2 + carry;
        printf("temp = %d\n", temp);
        carry = temp / 2;
        printf("carry = %d\n", carry);
        s3[k--] = (temp % 2) + '0';
        printf("s3 = %d\n", (temp % 2) + '0');
    }

    // If the result starts with '0', shift the string
    if (s3[0] == '0') {
        memmove(s3, s3 + 1, max_len);
    }

    return s3;
}

//for returning multiple nonrpts as a string
char* nonrepeatcharac(char s1[])
// char nonrepeatcharac(char s1[]) for returngina string
{
    int size = strlen(s1);
    char* s2 = (char*)malloc(size + 1);
    int k = 0;
    for(int i = 0; i < size; ++i)
    {
        int found = 0;

        for(int j = 0; j < size; ++j)
        {
            if(i != j && s1[i] == s1[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            s2[k++] = s1[i];
            // s1[i]; for retrungina single character
        }
    }
    s2[k] = '\0';
    if(s2[0] == '\0')
    {
        return "$";
    }
    else
    {
    return s2;
    }

    
}

char* concat(char s1[], char s2[])
{
    int i = 0;

    while(s1[i] != '\0')
    {
        i++;
    }

    int j = 0;
    while(s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0';

    return s1;
}

char* firstword(char s1[])
{
    int size = strlen(s1);

    char* s2 = (char*)malloc(size + 1);
    int k = 0;
    int flag = 1;

    for(int i = 0; i < size; i++)
    {
        if(s1[i] != ' ' && flag)
        {
            s2[k++] = s1[i];
            // s2[k+1] = ' ';
            // s2[k++];
            flag = 0;
        }
        else if(s1[i] == ' ')
        {
            flag = 1;
        }
    }
    return s2;
}

void nonzeros(char s1[])
{
    int i, c = -1; 
    
    // finding the all leading zeroes from the given string 
    // and removing it from the string 
    for (i = 0; i < strlen(s1); i++) { 
        if (s1[i] != '0') { 
            c = i; 
            break; 
        } 
    } 
    // printing the string again after removing the all 
    // zeros 
    for (i = c; i < strlen(s1); i++) { 
        printf("%c", s1[i]); 
    } 
}

void unicode(char s1[])
{
    int code; 
  printf("The String is %s\n",  
          s1); 
    
  for (int i = 0; s1[i] != '\0'; i++)  
  { 
    code = s1[i]; 
    printf("The Unicode Code Point At %d is:%d\n",  
            i, code); 
  } 
}

void split(char s1[], char dem[])
{
    int size = strlen(s1);
    int i = 0, j = 0;
    char sub[100];
    while(s1[i] != '\0')
    {
        if(s1[i] != dem[0])
        {
            sub[j++] = s1[i];
        }
        else
        {
            sub[j] = '\0';
            printf("sub   = %s", sub);

            j = 0;
        }
        i++;
    }
    if(j > 0)
    {
        sub[j] = '\0';
        printf("sub = %s\n", sub);
    }
}