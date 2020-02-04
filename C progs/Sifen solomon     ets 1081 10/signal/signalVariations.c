#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdbool.h>

void signalHandler()
{
    printf("someone interupted me with SIGCONT.");
    while (1)
    {
        sleep(1);
        printf("okay alarm  took over");
    }
}

void continueHandler()
{
    while (1)
    {
        sleep(1);
        /* code */
        printf("contiue handleer is runnig");
    }
}

int main()
{

    signal(18, &continueHandler);
    signal(14, &signalHandler);

    int counter = 0;
    while (1)
    {
        printf("Still running %d \n", getpid());
        sleep(1);
    }
    counter++;
    return 0;
}
