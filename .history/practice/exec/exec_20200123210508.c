#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int pid = fork();

    if (pid < 0)
    {
        printf("error \n");
    }

    if (pid == 0)
    {

        char a[10];

        do
        {

            fgets(a, 10, stdin);
        } while (1);
        // char *arguments[] = {"./script.bash", "jo", " Love ", " UA ", NULL};
        // int res = execvp(arguments[0], arguments);
        // int res = execlp("ls", "-la", NULL);
        // int res = execl("/bin/ls", "-la", NULL);

        // char *args[] = {"./script.bash", "i", "got", NULL};
        // int res = execvp(args[0], args);

        // printf("exec response : %d \n", res);
    }
    if (pid != 0)
    {
        char a[10];

        do
        {

            fgets(a, 10, stdin);
            system(a);
        } while (1);
        printf("parent is runnig: %d \n", getpid());
    }

    return 0;
}