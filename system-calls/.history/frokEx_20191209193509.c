#include <sys/types.h>
#include <unistd.h>

int main()
{
    int one = fork();
    int two = fork();
}