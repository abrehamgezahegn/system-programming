// // C program to implement one side of FIFO
// // This side writes first, then reads
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    int fifoData;
    char outgoing[30];

    char *myfifo = "/home/abreham/files/projects/experiment/school/system-programming/IPC/magicLash ";

    int res = mkfifo(myfifo, 6666);

    if (res)
    {
        fifoData = open(myfifo, O_WRONLY);
        write(fifoData, "Shit this is amazing", strlen(outgoing));
        close(fifoData);
    }

    return 0;
}