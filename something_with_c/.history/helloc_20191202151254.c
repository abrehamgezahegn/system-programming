#include <stdio.h>

void forkProccess()
{
    int num = 0;
    // printf("%d", fork());
    if (fork() == 0)
        printf("Hello from parent process");
    else
    {
        while (num <= 101)
        {

            print("%d", num + 2);
            num = num + 2;
        }
    }
}

int main()
{
    forkProccess();
    return 0;
}