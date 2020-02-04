#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{

    char buf[15];
    int pipeHolder[2];

    int res = pipe(pipeHolder); // create a pipe for the array values.
    // res - 0 => success ?
    //       1 => error ?

    pid_t process = fork();

    if (process == 0)
    { // child process
        close(pipeHolder[0]);
        char message[14] = "Some character";
        write(pipeHolder[1], message, strlen(message));
        close(pipeHolder[1]);
    }
    else if (process > 0)
    { // parent process
        read(pipeHolder[0], buf, 14);
        printf("I have got %s \n", strlen(buf));
    }
    else
    {
        printf("some error while forking \n");
    }
}