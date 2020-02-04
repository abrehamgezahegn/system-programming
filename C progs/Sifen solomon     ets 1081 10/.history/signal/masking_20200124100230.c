#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    sigset_t mask;
    sigset_t oldMask;

    printf("masked fo 10 secs %d  \n", getpid());

    sigemptyset(&mask);
    sigaddset(&mask, 15);

    int procMaskRes = sigprocmask(SIG_BLOCK, &mask, &oldMask);
    if (procMaskRes < 0)
        printf("sigproc mask erroror roror eororoer oer");

    printf("still masked!");
    sleep(10);

    int unBlockRes = sigprocmask(SIG_UNBLOCK, &mask, &oldMask);
    if (unBlockRes < 0)
        printf("ublock erorr error error");

    printf("unmasked");
    while (1)
    {
        sleep(1);
        printf("I am running unmasked \n");
    }

    return 0;
}