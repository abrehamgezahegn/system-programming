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

            num = num + 2;
            print("%d", num);
        }
    }
}

int main()
{
    forkProccess();
    return 0;
}