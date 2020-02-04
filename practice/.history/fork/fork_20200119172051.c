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
    }
    if (pid != 0)
    {
        // printf("this is parent process %d %d \n", pid, getpid());
        int second = fork();

        if (second == 0)
        {
            printf("am the seconds child with parent: %d \n", getppid());
        }
    }

    return 0;
}