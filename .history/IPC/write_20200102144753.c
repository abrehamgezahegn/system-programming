#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    int writeData = open("./some.txt", O_CREAT | O_WRONLY);
    char firstName[100] = "Fist name";
    int res;

    printf("Opened: %d", writeData);

    res = write(writeData, &firstName, strlen(firstName));

    printf("write res: %d", res);

    return 0;
}