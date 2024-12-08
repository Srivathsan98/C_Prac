#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>

void main()
{
    clock_t start, end;
    double elapse;
    time_t print;
    time_t print2;
    struct timeval started, ended;
    long secs, mics;
    const char *filename = "helloworld.txt";
    char *str = "Hello World\n";
    char *str2 = str;
    gettimeofday(&started, NULL);
    time(&print);
    start = clock();
    FILE *write_fp = fopen(filename, "wb");
    if (write_fp == NULL)
    {
        perror("Error opening file\n");
        return;
    }

    printf("Hello World\n");
    
    puts("Hello World\n");
    write(1, "Hello World\n", sizeof("Hello World\n"));
    
    while(*str)
    {
        putchar(*str++);
        
    }
    printf("sdfvjch");
    write(STDOUT_FILENO, str, strlen(str));//this will not print as the putchar has already incremented the value of str to /0 or nullptr.
    printf("sdfvjch");
    write(STDOUT_FILENO, str2, strlen(str2));//this will print because we have stored the copy of str in another variable.
    
    fwrite(str2, sizeof(char), strlen(str2), write_fp);
    
    fclose(write_fp);

    

    FILE *read_fp = fopen(filename, "rb");
    if(read_fp == NULL)
    {
        perror("Error reading file\n");
        return;
    }

    

    fseek(read_fp, 0, SEEK_END);
    long filesize = ftell(read_fp);
    rewind(read_fp);
    
    char *buffer = (char *) malloc(filesize + 1);
    if(buffer == NULL)
    {
        perror("mem alloc failed\n");
        fclose(read_fp);
        return;
    }
    size_t bytes = fread(buffer, sizeof(char), filesize, read_fp);
    buffer[bytes] = '\0';

    printf("%s", buffer);
    
    time(&print2);
    end = clock();
    printf("printf = %f\n",difftime(print, print2)); // doesn't provide in ms or us so not much useful.
    elapse = ((double)(end - start))/ CLOCKS_PER_SEC;
    printf("elapse = %f\n", elapse);
    gettimeofday(&ended, NULL);
    secs = ended.tv_sec - started.tv_sec;
    mics = ended.tv_usec - started.tv_usec;

    if(mics < 0)
    {
        secs--;
        mics += 1000000;
    }
    free(buffer);
    fclose(read_fp);

    printf("timeday = %ld and %ld\n", secs, mics);
}