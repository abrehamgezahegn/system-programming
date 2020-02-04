#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int main()
{

    int s = alarm(2);
    printf("%s \n", s);
    return 0;
}