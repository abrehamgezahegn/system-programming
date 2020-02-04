#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdbool.h>
#include <signal.h>

void handleSig()
{
    printf("jonnny has signal arrived \n");
}

int main()
{

    int ret = signal(SIGTERM, &handleSig);

    int p = fork();

    if (p == 0)
    {
        // while (1)
        // {

        //     sleep(1);
        //     printf("process is running %d \n", getpid());
        // }
    }
    else if (p > 0)
    {
        // kill(getpid(), 15);
        // raise(15);
        // abort();
        // alarm(3);
        // sleep(2);
        while (1)
        {
            sleep(1);
            printf("parent running \n");
            /* code */
        }
    }

    return 0;
}