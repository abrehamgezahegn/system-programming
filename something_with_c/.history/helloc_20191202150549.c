#include <stdio.h>

void forkProccess()
{
    if (fork() == 1)
        printf("Hello from child process");
    else
        printf("Hello from parent process");
}

int main()
{
    forkProccess();
    return 0;
}