#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    int ruid, euid, suid;
    getresuid(*ruid, *euid, *suid);
    printf("suid  %d \n", suid);

    return 0;
}