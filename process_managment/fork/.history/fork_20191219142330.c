#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

    pid_t forkPid = fork();

    if (forkPid == 0)
    {
        printf("Child Process \n ");
    }
    else if (forkPid != 0)
    {
        printf("Parent process \n ");
    }
    else
    {
        printf("Error has ocurred");
    }

    return 0;
}
