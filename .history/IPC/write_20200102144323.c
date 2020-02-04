#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    int writeData = open("./some.txt", O_CREAT | O_WRONLY);
    int res;

    printf("Opened: %d", writeData);

    res = write(writeData, 1241, 100);

    // printf("write res: %d", res);

    return 0;
}