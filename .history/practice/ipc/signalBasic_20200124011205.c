#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    while (1)
    {

        printf("process is running %d", getpid());
        sleep(1);
    }

    return;
}