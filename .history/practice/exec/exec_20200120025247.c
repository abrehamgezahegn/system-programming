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
        execlp("ls -l", "NULL", NULL);
        printf("first child: %d \n", getppid());
    }
    if (pid != 0)
    {
        printf("parent is runnig: %d", getpid());
        execl("./script.bash", "NULL", NULL);
    }

    return 0;
}