#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    FILE *writeData = fopen("./useless.c", "w");
    int res;

    printf("Opened: %d \n", writeData);

    res = fwrite(writeData, "first name", 100);

    printf("write res: %d \n", res);

    return 0;
}