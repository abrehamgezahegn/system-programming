// C program to implement one side of FIFO
// This side reads first, then writes
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    int fd1;
    char *myfifo = "/home/abreham/files/projects/experiment/school/system-programming   /IPC/magic";
    mkfifo(myfifo, 0666);

    char incoming[80], outgoing[80];

    while (1)
    {
        fd1 = open(myfifo, O_RDONLY);
        read(fd1, incoming, 80);

        printf("\nOther side: %s", incoming);
        close(fd1);

        printf("\nYou: ");
        fd1 = open(myfifo, O_WRONLY);
        fgets(outgoing, 80, stdin);
        write(fd1, outgoing, 80);
        close(fd1);
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <fcntl.h>
// #include <sys/stat.h>
// #include <sys/types.h>
// #include <unistd.h>

// int main()
// {

//     int fifoData;
//     char incoming[100];

//     char *myfifo = "/home/abreham/files/projects/experiment/school/system-programming/IPC/magicLash";

//     while (1)
//     {
//         int res = mkfifo(myfifo, 0666);

//         if (res)
//         {

//             fifoData = open(myfifo, O_RDONLY);
//             read(fifoData, incoming, 100);
//             printf("i got: %s \n", incoming);
//             close(fifoData);
//         }
//     }

//     return 0;
// }