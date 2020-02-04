#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{

    int ret = mkfifo("./fifoFile", 0666);
    int fifoData;

    if (ret < 0)
    {
        printf("error");
    }
    else
    {
        fifoData = open("./fifoFile", O_WRONLY);
        write(fifoData, "some thing to pass", 100);
        close(fifoData);
    }

    return 0;
}