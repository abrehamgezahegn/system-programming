#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

void sizeChange()
{
    printf("Window size?");
}

int main()
{
    signal(SIGWINCH, &sizeChange);
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
