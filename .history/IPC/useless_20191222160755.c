#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int main()
{

    int s = alarm(2);
    return 0;
}