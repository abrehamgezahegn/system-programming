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

    sigemptyset(&mask);
    sigaddset(&mask, 15);

    sigprocmask(SIG_BLOCK, &mask, &oldMask);

    return 0;
}