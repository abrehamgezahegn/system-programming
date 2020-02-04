#include <stdio.h>

void forkProccess()
{
    // printf("%d", fork());
    if (fork() == 0)
        printf("Hello from parent process");
    else
        printf("Hello from child process");
}

int main()
{
    forkProccess();
    return 0;
}