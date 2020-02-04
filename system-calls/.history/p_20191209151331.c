#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int count = 0;
    while (1)
    {
        printf("some \n");
        if (count > 3)
        {
            kill(getpid());
        }
    }
}