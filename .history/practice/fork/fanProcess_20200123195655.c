#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main(int num)
{

    printf("am main %d \n", getpid());

    int p1 = fork();

    if (p1 == 0)
    {
        while (1)
        {
            printf("am child 1  P PP %d  %d \n", getpid(), getppid());
            sleep(1);
        }
        // skip
    }
    else if (p1 > 0)
    {
        // printf("creating secod child \n");

        int p2 = fork();

        if (p2 == 0)
        {
            while (1)
            {
                printf("am child2 P PP %d  %d \n", getpid(), getppid());
                sleep(1);
            }
            // skip
        }
        else if (p2 > 0)
        {
            int status;
            waitpid(p1, &status, WCONTINUED);

            printf("this is the parenttt baba  \n");
        }
    }

    // for (int i = 0; i < 2; i++)
    //     if (fork() == 0)
    //         break;

    // printf("Childdd P PP %d %d \n", getpid(), getppid());
    // while (1)
    // ;
    return 0;
}