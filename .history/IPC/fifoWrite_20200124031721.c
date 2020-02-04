// C program to implement one side of FIFO
// This side writes first, then reads
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    int fd;
    char *myfifo = "/home/abreham/files/projects/experiment/school/system-programming/IPC/magic";
    char incoming[80], outgoing[80];

    mkfifo(myfifo, 0666);

    while (1)
    {

        printf("You: ");
        fd = open(myfifo, O_WRONLY);

        fgets(outgoing, 80, stdin);

        write(fd, outgoing, strlen(outgoing) + 1);
        close(fd);

        fd = open(myfifo, O_RDONLY);
        read(fd, incoming, 80);
        printf("Other side: %s", incoming);
        close(fd);
    }

    return 0;
}

// // C program to implement one side of FIFO
// // This side writes first, then reads
// #include <stdio.h>
// #include <string.h>
// #include <fcntl.h>
// #include <sys/stat.h>
// #include <sys/types.h>
// #include <unistd.h>

// int main()
// {

//     int fifoData;
//     char outgoing[30];

//     char *myfifo = "/home/abreham/files/projects/experiment/school/system-programming/IPC/magicLash ";

//     int res = mkfifo(myfifo, 6666);

//     if (res)
//     {
//         fifoData = open(myfifo, O_WRONLY);
//         write(fifoData, "Shit this is amazing", strlen(outgoing));
//         close(fifoData);
//     }

//     return 0;
// }