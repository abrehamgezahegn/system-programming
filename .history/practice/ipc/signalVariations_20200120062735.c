#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdbool.h>

void signalHandler()
{
    printf("someone inturppted me baba. ama do somethig about it");
    while (1)
    {
        sleep(1);
        printf("okay i took over")
    }
}

void continueHandler()
{
    printf("contiue handleer is runnig");
}

int main()
{

    // void (*oldHandler)(int);

    signal(14, &signalHandler);
    signal(18, &continueHandler);

    int counter = 0;
    while (1)
    {
        // if (counter == 100)
        // {
        // printf("pausing \n");
        // pause();
        // abort();
        // raise(19); // sig num
        // alarm(2);
        printf("Still running %d \n", getpid());
        sleep(1);
    }
    // counter++;
    return 0;
}
