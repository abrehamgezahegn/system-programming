#include <stdio.h>

void forkProccess()
{
    if (fork() == 0)
    {
        printf("Hello from child process")
    }
    else
    {
        printf("Hello from parent process")
    }
}

int main()
{
    fork();
    printf("Hello C!");
    return 0;
}