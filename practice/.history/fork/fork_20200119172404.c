#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

    int pid = fork();

    if (pid < 0)
    {
        printf("error \n");
    }

    if (pid == 0)
    {
        printf("first child: %d \n", getppid());
    }
    if (pid != 0)
    {
        int second = fork();

        if (second == 0)
        {
            printf("am the seconds child with parent: %d \n", getppid());
            int third = fork();
            if (third == 0)
            {
                printf("third child: %d", getppid());
            }
        }
    }

    return 0;
}