#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

// int main()
// {
//     printf("main pid: %d \n", getpid());

//     int pid = fork();

//     if (pid == 0)
//     {
//         printf("Child one is runnig %d \n", getppid());
//         int pid2 = fork();

//         //  child

//         if (pid2 > 0)
//         {
//             printf("child one rasu is running %d \n", getpid());
//         }

//         // this
//         // if (pid2 == 0)
//         // {
//         //     printf("child inside first child \n");
//         // }
//     }
//     if (pid > 0)
//     {
//         // printf("parent is running \n");
//         // int pid3 = fork();

//         // if (pid3 == 0)
//         // {
//         //     printf("Child  two inside parent one \n");
//         // }

//         // if (pid > 0)
//         // {
//         //     printf("parent inside parent \n");
//         // }
//     }

//     return 0;
// }

int main()
{

    int p = fork();

    if (p == 0)
    {
        int count = 0;
        while (1)
        {
            count++;
            printf("c \n");
            if (count == 4)
                exit();
            sleep(1);
            /* code */
        }
    }
    if (p > 0)
    {
        while (1)
        {

            printf("p \n");
            wait(NULL);
            sleep(1);
            /* code */
        }
    }

    return 0;
}