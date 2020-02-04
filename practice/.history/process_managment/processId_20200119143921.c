#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{

    pid_t p = getuid();

    printf("process is owned by: %d \n", p);

    return 0;
}
