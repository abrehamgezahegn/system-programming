#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{

    pid_t p = getuid();

    printf("process is owned by: %d", p);

    return 0;
}
