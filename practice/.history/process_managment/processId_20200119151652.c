#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{

    // pid_t p = getuid();

    // printf("process is owned by user: %d \n", p);
    // printf("Porcess is  owned by group: %d \n", getgid());

    // printf("porcess effective user is: %d \n", geteuid());
    // printf("porcess effective group is: %d \n", getegid());

    // uid_t a, b, c;

    // int res = getresuid(&a, &b, &c);
    // printf("response  of getresuid %d \n", res);
    // printf("uids  of getresuid %d %d %d \n", a, b, c);

    int setRes = setuid(1006);

    printf("set uid esponse: %d", setRes);

    // int res = setresuid(1200,100,121); // change real, effective and saved user id;/

    return 0;
}
