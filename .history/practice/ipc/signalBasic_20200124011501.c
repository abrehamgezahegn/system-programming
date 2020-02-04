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

    printf("signal arrived \n");
}

int main()
{

    int ret = signal(15, &handleSig);

    while (1)
    {

        sleep(1);
        printf("process is running %d \n", getpid());
    }

    return 0;
}