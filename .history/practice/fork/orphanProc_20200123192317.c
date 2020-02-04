#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <signal.h>

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
        printf("parent running pid %d\n", getpid());
        // exit(0);
        kill(getpid(), 9);
    }

    return 0;
}