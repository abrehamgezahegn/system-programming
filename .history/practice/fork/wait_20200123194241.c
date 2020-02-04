#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int pid = fork();

    if (pid < 0)
    {
        printf("fork error");
    }

    if (pid == 0)
    {
        while (1)
        {
            printf("child is running pid is: %d  \n", getpid());
            sleep(1);
        }

        exit(100);
    }

    if (pid > 0)
    {
        printf("befir wait \n");
        int status;
        int proc = wait(&status);

        printf("clid is done \n");

        // int proc = waitpid(pidhere , status , options);
        // int proc = wait3(status, options, rsusage)
        // int proc = wait4(pid, status, options, rsusage)

        // option - WUNTRACED   - return if child is stopped by siganal
        // -  WCONTINUED - return if child was continued by signal
        // -  WNOHANG - return if child doesn't exit

        printf("wait status: %d \n", status);
        // bool res = WIFEXITED(status); // if exited noramlly
        bool res = WIFSIGNALED(status); // if killed by siganl
        printf("ahs exited : %d", res);

        // while (1)
        // {
        //     printf("parent is running pid is %d", getpid());
        //     sleep(1);
        // }
    }

    return 0;
}