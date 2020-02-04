#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t p = fork();
    // printf("running onece and twice \n");
    if (p == 0)
    {
        printf("Running before exec \n");

        execl("./search.bash", NULL);

        printf("Running after exec \n");
        printf("first child \n");
        pid_t p1 = fork();
        if (p1 == 0)
        {
            printf("Second chil \n");
        }
    }
    else if (p != 0)
    {
        printf("first paren \n");
        fork() if ()
        {
            fork()
        }

        // wait(NULL);
        // printf("hello from (parent) fork: %d \n", getppid());
    }
    else
    {
        printf("Error");
    }

    return 0;
}