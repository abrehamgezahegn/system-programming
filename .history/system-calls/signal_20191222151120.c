#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

void sizeChange()
{
    printf("Window size? \n");
    // DO ANY SHIT HERE
}

int main()
{
    signal(SIGILL, sizeChange);
    int count = 0;
    while (1)
    {
        count++;
        printf("WAIT FOR IT... \n");
        sleep(1);
        if (count == 3)
            printl();
    }
    return 0;
}

// int main()
// {
//     int count = 0;
//     while (1)
//     {
//         printf("some \n");
//         if (count > 3)
//         {
//             kill(getpid(), 19);
//         }
//         count++;
//     }
// }
