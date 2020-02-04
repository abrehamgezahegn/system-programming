#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    struct some
    {
        int age;
    };

    some.age = 100;
    printf("age is %d", some.age);

    return 0;
}