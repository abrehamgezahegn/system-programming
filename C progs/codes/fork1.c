
#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid;

    pid = fork();

    switch(pid)
    {
        case 0:
            printf("Parent PID: %d\n",getpid());
            printf("Parent fork() return value: %d\n",pid);
            break;
        default:
            printf("Child PID: %d\n",getpid());
            printf("Child fork() return value: %d\n",pid);
    }

    return(0);
}
