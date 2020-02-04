#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    int fifoData;
    char incoming[100];

    char *myfifo = "/home/abreham/files/projects/experiment/school/system-programming/IPC/magicLash";

    while (1)
    {
        int res = mkfifo(myfifo, 0666);

        if (res)
        {

            fifoData = open(myfifo, O_RDONLY);
            read(fifoData, incoming, 100);
            printf("i got: %s \n", incoming);
            close(fifoData);
        }
    }

    return 0;
}