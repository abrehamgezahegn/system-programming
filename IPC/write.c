#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    int writeData = open("/home/SP/Student", O_CREAT | O_WRONLY);
    char firstName[100] = "Fist name";
    int res;

    if (res < 0)
    {
        printf("Some error has occured opening file");
    }

    res = write(writeData, &firstName, strlen(firstName));

    if (res < 0)
    {
        printf("Some error has occured writing");
    }
    else
    {
        printf("Bytes returned: %d", res);
    }

    return 0;
}