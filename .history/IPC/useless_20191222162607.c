#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int main()
{

    sigset_t set;

    sigemptyset(sigset_t * set);

    while (1)
    {
        printf("Process is running. Tit new.");
    }

    return 0;
}