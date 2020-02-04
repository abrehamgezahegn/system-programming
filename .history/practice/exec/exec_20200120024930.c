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
        printf("first child: %d \n", getppid());
        execl("./script", NULL);
    }
    if (pid != 0)
    {
        printf("parent is runnig: %d", getpid());
    }

    return 0;
}