#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void forkProccess()
{

    if (fork() == 0)
    {
        system("./search.bash");
    }
    // else
    // {
    //     while (num <= 6)
    //     {

    //         num = num + 2;
    //         printf("%d", num);
    //         sleep(1);
    //     }
    // }
}

int main()
{
    printf("Main pid %d \n", getpid());

    pid_t p = fork();
    if (p == 1)
    {
        while (1)
        {
            printf("Hello from child process");
            printf("forking pid: %d", getpid());
            printf("parent pid: %d", getppid());
        }
    }
    else if (p > 0)
    {
        printf("hello from parent fork: %d", getppid);
    }
    else
    {
        printf("Error")
    }

    return 0;
}