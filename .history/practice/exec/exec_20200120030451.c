#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

    int pid = fork();

    if (pid < 0)
    {
        printf("error \n");
    }

    if (pid == 0)
    {
        // int res = execlp("./script.bash", "NULL", NULL);
        // int res = execlp("ls", "-la", NULL);
        // int res = execl("/bin/ls", "-la", NULL);

        char *args[] = {"cash", "i", "got", NULL};
        int res = execv("./script.bash", args);

        printf("exec response : %d \n", res);
    }
    if (pid != 0)
    {
        printf("parent is runnig: %d \n", getpid());
    }

    return 0;
}