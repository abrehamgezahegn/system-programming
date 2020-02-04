#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

int main()
{

    char buf[150];
    char buf2[150];
    int pipeHolder[2];

    int res = pipe(pipeHolder); // create a pipe for the array values.
    // res - 0 => success ?
    //       1 => error ?

    pid_t process = fork();

    if (process == 0)
    { // child process
        close(pipeHolder[0]);
        char message[1400] = "Some character dfghjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
        write(pipeHolder[1], message, strlen(message));
        close(pipeHolder[1]);
    }
    else if (process > 0)
    { // parent process
        // waitpid(process, NULL, 0);
        read(pipeHolder[0], buf2, strlen(buf2));
        printf("I have got %s \n", buf2);
    }
    else
    {
        printf("some error while forking \n");
    }
}