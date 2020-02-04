#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

    printf("am main %d \n", getpid());
    int p1 = fork();

    if (p1 == 0)
    {
        // skip
    }
    else if (p1 > 0)
    {
        printf("am child 1 %d \n", getpid());
        print("creating secod child \n");

        int p2 = fork();

        if (p2 == 0)
        {
            // skip
        }
        else if (p2 > 0)
        {

            printf("am child 2 %d \n", getpid());

            print("creating thrid child  \n");
        }
    }

    return 0;
}