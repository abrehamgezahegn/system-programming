#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    int one = fork();
    int two = fork();

    printf("Okie there are some child processes")
}