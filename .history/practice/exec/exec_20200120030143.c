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
        int res = execl("./script.bash", "NULL", NULL);
        // int res = execlp("ls", "-la", NULL);
        // int res = execl("/bin/ls", "-la", NULL);

        printf("exec response : %d", res);
    }
    if (pid != 0)
    {
        printf("parent is runnig: %d", getpid());
    }

    return 0;
}