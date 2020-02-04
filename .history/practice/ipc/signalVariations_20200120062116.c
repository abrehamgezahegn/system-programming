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
}

int main()
{

    // void (*oldHandler)(int);

    signal(14, &signalHandler);

    int counter = 0;
    while (counter < 10000)
    {
        if (counter == 100)
        {
            printf("pausing \n");
            // pause();
            // abort();
            // raise(19); // sig num
            // alarm(2);
        }
        printf("Still running \n");
        counter++;
    }

    return 0;
}