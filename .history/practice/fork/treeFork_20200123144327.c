#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

    int pid = fork();

    if (pid == 0)
    {
        printf("Child one is runnig \n");
    }

    return 0;
}