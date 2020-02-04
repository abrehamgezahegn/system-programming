#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

    printf("am main %d \n", getpid());
    // int p1 = fork();

    // if (p1 == 0)
    // {
    //     printf("am child1 P PP %d  %d \n", getpid(), getppid());

    //     // skip
    // }
    // else if (p1 > 0)
    // {
    //     // printf("creating secod child \n");

    //     int p2 = fork();

    //     if (p2 == 0)
    //     {
    //         printf("am child2 P PP %d  %d \n", getpid(), getppid());
    //         // skip
    //     }
    //     else if (p2 > 0)
    //     {

    //         // printf("creating thrid child  \n");
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {
        int p = fork();
        if (p == = 0)
            break;
    }

    return 0;
}