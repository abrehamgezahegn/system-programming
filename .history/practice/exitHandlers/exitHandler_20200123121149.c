#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

void handleExit(status)
{
    printf("I got exit sys call baba! \n");
}

void handler_2(status, arg)
{
    printf('exited on status %d \n', status);
}

int main()
{

    // atexit(&handleExit);
    on_exit(&handler_2, "kall")

        exit(10);
    return 0;
}