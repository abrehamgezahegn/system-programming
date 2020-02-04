#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t p = fork();
    if (p == 0)
    {

        printf("Look who's here %d \n", getpid());
        exit(0);
    }
    else if (p != 0)
    {
        // wait(NULL);
        pid_t waitRes = wait(NULL);
        printf("Wait response: %d", waitRes);
        while (wait(NULL) > 0)
        {
            printf("Erim chisua");
        }

        printf("Parent before exiting: %d \n", getpid());
    }
    else
    {
        printf("Error");
    }

    return 0;
}