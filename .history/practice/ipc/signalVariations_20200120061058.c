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
        sleep(1);
        if (counter == 1)
        {
            printf("pausing \n");
            // pause();
            // abort();
            // raise(19); // sig num
            alarm(2);
        }
        printf("Still running \n");
        counter++;
    }

    return 0;
}