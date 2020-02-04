#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{

    pid_t p = getuid();

    printf("process is owned by user: %d \n", p);
    printf("Porcess is  owned by group: %d \n", getgid());

    printf("porcess effective user is: %d \n", geteuid());
    printf("porcess effective group is: %d \n", getegid());

    uid_t a, b, c;

    int res = getresuid(&a, &b, &c);
    printf("response  of getresuid %d \n", res);

    return 0;
}
