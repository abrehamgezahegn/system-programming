// #include <sys/types.h>
// #include <unistd.h>
// #include <stdio.h>

// int main()
// {
//     int one = fork();
//     int two = fork();

//     printf("Okie there are some child processes %c \n", getpid());
// }

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    printf("Main pid %d \n", getpid());

    pid_t p = fork();
    if (p == 0)
    {

        int count = 5;
        while (count > 0)
        {
            printf("Hello from child process \n");
            printf("(child) pid: %d \n", getpid());
            printf("(parent) pid: %d \n", getppid());
            count--;
        }
    }
    else if (p > 0)

    {
        printf("child id in parent: %d \n", p);
        wait(NULL);
        printf("hello from (parent) fork: %d \n", getppid());
    }
    else
    {
        printf("Error");
    }

    return 0;
}