#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int counter = 0;
    while (counter < 7)
    {
        // if (counter == 4)
        // {
        //     pause();
        // }
        printf("Still running");
        counter++;
    }

    return 0;
}