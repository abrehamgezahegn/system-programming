#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main(int num)
{

    int p = fork();

    if (p == 0)
    {
        printf("child is running! P PP %d %d", getpid(), getppid());
        while (1)
            ;
    }
    if (p > 0)
    {
        printf("parent running");
        exit(0);
    }

    return 0;
}