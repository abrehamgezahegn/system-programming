// and sigquit() signal functions
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void abortHandle()
{
    printf("Handling abort \n");
    printf("Running some code \n");
    sleep(2);
    printf("Operation done\n");
}

void termHandle()
{
    printf("Handling termination \n");
    printf("Running some code \n");
    sleep(2);
    printf("Operation done\n");
}

int main()
{

    signal(SIGABRT, &abortHandle);
    signal(SIGTERM, &termHandle);

    for (int i = 0; i < 7; i++)
    {

        printf("Looping through \n");

        if (i == 2)
        {

            printf("Raising SIGTERM! \n");
            raise(SIGTERM);
        };

        if (i == 5)
        {
            printf("Raising SIGABRRT! \n");
            raise(SIGABRT);
        }
        sleep(1);
    }
}