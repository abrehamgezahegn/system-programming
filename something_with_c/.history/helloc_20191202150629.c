#include <stdio.h>

void forkProccess()
{
    printf(fork());
    // if (fork() == 1)
    //     printf("Hello from child process");
    // else
    //     printf("Hello from parent process");
}

int main()
{
    forkProccess();
    return 0;
}