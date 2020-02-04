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

void a();

int main()
{

    a = signal(SIGTERM, &handleSig);

    int p = fork();

    if (p == 0)
    {
        while (1)
        {

            sleep(1);
            printf("process is running %d \n", getpid());
        }
    }
    else if (p > 0)
    {

        while (1)
        {
            sleep(1);
            printf("parent running %d\n", getpid());
            /* code */
        }
    }

    return 0;
}