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

        printf("first child running exec %d \n", getppid());
        int res = execlp("ls", "-la", NULL);
        // printf("child pid in child fork %d \n", getpid());
    }
    if (pid != 0)
    {
        printf("child pid parent fork: %d \n", pid);
        // int second = fork();

        // if (second == 0)
        // {
        //     printf("am the seconds child with parent: %d \n", getppid());
        // }
    }

    return 0;
}