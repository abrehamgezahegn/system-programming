#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

    printf("error");

    int pid = fork();

    if (pid < 0)
    {
        printf("error");
    }

    if (pid = 0)
    {
        printf("child is runnig pid and ppid is: %d %d", getppid(), getpid());
    }
    if (pid != 0)
    {
        printf("this is parent process %d %d", pid, getpid());
    }

    return 0;
}