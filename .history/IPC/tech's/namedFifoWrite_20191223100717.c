#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int fd;

    //create fifo
    int ret = mkfifo("./myfifo", 0666);
    if (ret)
    {

        //open a file for writing
        fd = open("./myfifo", O_WRONLY);
        //write
        write(fd, "ABCDEF GH", 9);
        //close fd
        close(fd);
    }
    return 0;
}
