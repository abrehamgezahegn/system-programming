#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main(int num)
{

    printf("am main %d \n", getpid());

    for (int i = 0; i < 3; i++)
        if (fork() == 0)
            break;

    printf("Childdd P PP %d %d \n", getpid(), getppid());
    while (1)
        ;
    return 0;
}