#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int num)
{

    int p = fork();

    if (p == 0)
    {
        printf("child is running! P PP %d %d \n", getpid(), getppid());
        while (1)
            ;
    }
    if (p > 0)
    {
        printf("parent running \n");
        // exit(0);
        kill(getpid());
    }

    return 0;
}