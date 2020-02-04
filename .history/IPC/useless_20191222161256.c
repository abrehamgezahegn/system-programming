#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    struct some
    {
        int age;
    };

    printf("age is %d", some.age);

    return 0;
}