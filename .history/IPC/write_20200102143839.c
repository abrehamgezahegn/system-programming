#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    int writeData = open("./some", O_CREAT | O_WRONLY);
    int res;

    // printf("Opened: %n", writeData);

    res = write(writeData, "first name", 100);

    // printf("write res: %d", res);

    return 0;
}