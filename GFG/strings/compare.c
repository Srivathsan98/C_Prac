#include "compare.h"
//check what to do
// bool palindrome(char s1[])
// {
//     int size = strlen(s1);
//     bool even = false;
//     if((size % 2) == 0)
//     {
//         even = true;
//     }
//     else
//     {
//         even = false;
//     }

//     if(even)
//     {
//         int mid = size / 2;
//         char* n1 = (char*)malloc((size/2) + 1);
//         char* n2 = (char*)malloc((size/2) + 1);

//         for(int i = 0; i < mid; i++)
//         {
//             n1[i] = s1[i];
//         }
//         printf("n1 = %s", n1);
//         for(int i = mid +1; i < size; i++)
//         {
//             n2[i] = s1[i];
//         }
//         printf("n2 = %s", n2);

//         int k  = 0,l = size;
//         while((n1[k] <= mid) && (n2[l] >= (mid + 1)))
//         {
//             if(n1[k] != n2[l])
//             {
//                 return false;
//                 // break;
//             }
//             k++;
//             l--;
//         }
//     }
//     return true;
// }

bool palindrome(char s1[]) {
    int size = strlen(s1);
    int start = 0;
    int end = size - 1;

    while (start < end) {
        if (s1[start] != s1[end]) {
            return false; // Not a palindrome
        }
        start++;
        end--;
    }

    return true; // It's a palindrome
}

char* reverse(char s1[]) 
{
    int size = strlen(s1);
    int start = 0;
    int end = size - 1;
    char* s2 = (char*)malloc(size + 1);
    s2[size] = '\0';

    // while (start < end) {
    //     if (s1[start] != s1[end]) {
    //         return false; // Not a palindrome
    //     }
    //     start++;
    //     end--;
    // }
    for(int i = 0; i < size; i++)
    {
        s2[i] = s1[end];
        end--;
    }

    return s2; // It's a palindrome
}

void revRecursive(char *l, char *r) {
  
      // Till two pointers do not meet, 
     // swap the values they point to
    if (l != r) {
        char c = *l;
        *l = *r;
        *r = c;
      
          // Recursive call
        revRecursive(l + 1, r - 1);
    }
}

// Wrapper function
char* rev(char *s) {
    printf("rev = %s\n", s + strlen(s) - 1);
    int size = strlen(s);
    char* rev = (char*)malloc(size + 1);
    strcpy(rev, s);
    // Calling the recursive function
    revRecursive(rev, rev + strlen(rev) - 1);
    
    return rev;
}

int compare(char s1[], char s2[]) 
{
    int i = 0;

    // Compare characters one by one to determine
      // lexicographic order
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] > s2[i]) ? 1 : -1;
        i++;
    }

    // If one string ends before the other
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 0; // Strings are equal
    }
    return (s1[i] == '\0') ? -1 : 1;
}

bool pangram(char s1[])
{
    int size = strlen(s1);

    bool flag[26];
    for(int i = 0; i < 26; i++)
    {
        flag[i] = false;
    }

    int index;
    for(int i = 0; i < size; i++)
    {
        if('A' <= s1[i] && s1[i] <= 'Z')
        {
            index = s1[i] - 'A';
        }

        else if('a' <= s1[i] && s1[i] <= 'z')
        {
            index = s1[i] - 'a';
        }

        else
        {
            continue;
        }
        flag[index] = true;
    }
    for(int i = 0; i < 26; i++)
    {
        if(flag[i] == false)
        return (false);
    }
    return (true);
}

int strcompare(const void* a, const void* b) 
{
    return strcmp(*(const char**)a, *(const char**)b);
}

// Sort function
void sort(char* arr[], int n) 
{
    qsort(arr, n, sizeof(char*), strcompare);
}