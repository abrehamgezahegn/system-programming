#include <sys/types.h>
#include <sys/wait.h>

int main()
{

    int pid = fork();

    if (pid = 0)
    {
        printf("child is runnig pid and ppid is: %d %d", getppid(), getpid());
    }
    if (pid != 0)
    {
        printf("this is parent process %d %d", p, getpid());
    }

    return 0;
}