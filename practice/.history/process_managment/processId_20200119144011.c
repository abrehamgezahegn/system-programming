#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{

    pid_t p = getuid();

    printf("process is owned by user: %d \n", p);
    printf("Porcess is  owned by group: $d", getgid());

    return 0;
}