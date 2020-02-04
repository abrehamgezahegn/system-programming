#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    printf("Main pid %d \n", getpid());

    pid_t p = fork();
    printf("running onece and twice \n");
    // if (p == 0)
    // {
    //     // execlp("./search.bash", NULL);
    //     printf("Running after exec");
    // }
    // else if (p > 0)
    // {
    //     printf("hello from (parent) fork: %d \n", getppid());
    // }
    // else
    // {
    //     printf("Error");
    // }

    return 0;
}