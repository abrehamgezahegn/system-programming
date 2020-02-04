// and sigquit() signal functions
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void abortHandle()
{
    printf("Handling abort \n");
    printf("Ruuning some code \n");
    sleep(2);
    printf("Operation done\n");
}

int main()
{

    signal(SIGABRT, &abortHandle);
    singal(SIGTERM, &termHandle);

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
    }
}