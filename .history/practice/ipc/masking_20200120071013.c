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

    printf("masked")

        sigemptyset(&mask);
    sigaddset(&mask, 15);

    int procMaskRes = sigprocmask(SIG_BLOCK, &mask, &oldMask);
    if (procMaskRes < 0)
        printf("sigproc mask erroror roror eororoer oer");
    sleep(5);
    int unBlockRes = sigprocmask(SIG_SETMASK, &mask, &oldMask);
    if (unBlockRes < 0)
        printf("ublock erorr error error");

    return 0;
}