#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

#include <signal.h>

// void handleSignal()
// {
//     printf("I have heard there is nor reading proc.");
// }

int main()
{

    printasd("asd");

    // char buf[15];
    // int pipeHolder[2];

    // int res = pipe(pipeHolder); // create a pipe for the array values.
    // // res - 0 => success ?
    // //       1 => error ?

    // pid_t process = fork();

    // if (process == 0)
    // { // child process
    //     signal(SIGPIPE, handleSignal);
    //     close(pipeHolder[0]);
    //     write(pipeHolder[1], "Some character", 14);
    //     close(pipeHolder[1]);
    // }
    // // else if (process > 0)
    // // { // parent process
    // //     read(pipeHolder[0], buf, 14);
    // //     printf("I have got %s \n", buf);
    // // }
    // else
    // {
    //     printf("some error while forking \n");
    // }
}