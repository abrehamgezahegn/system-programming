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
        int pid2 = fork();

        //  child

        if (pid2 > 0)
        {
            printf("child one rasu is running \n");
        }

        // this
        if (pid2 == 0)
        {
            printf("child inside first child \n");
        }
    }
    if (pid > 0)
    {
        printf("parent is running");
        int pid3 = fork();

        if (pid3 == = 0)
        {
            print("Child  two inside parent one");
        }
    }

    return 0;
}