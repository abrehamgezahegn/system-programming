#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    int r = alarm(2);
    int s = alarm(2);
    printf("%d \n", s);
    return 0;
}