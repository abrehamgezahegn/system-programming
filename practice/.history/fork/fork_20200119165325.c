#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

    int pid = fork();

    if (pid < 0)
    {
        printf("error \n");
    }

    if (pid == 0)
    {
        printf("child is runnig pid and ppid is: %d %d \n", getppid(), getpid());
    }
    if (pid != 0)
    {
        printf("this is parent process %d %d \n", pid, getpid());
    }

    return 0;
}