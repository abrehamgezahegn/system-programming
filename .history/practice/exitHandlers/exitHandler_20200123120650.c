#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

void handleExit()
{
    printf("I got exit sys call baba! \n");
}

int main()
{

    atexit(&handleExit);

    return 0;
}