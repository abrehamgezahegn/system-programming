#include <stdio.h>

void forkProccess()
{
    int num = 0;
    // printf("%d", fork());
    if (fork() == 0)
        printf("Hello from parent process");
    else
    {
        while (num <= 6)
        {

            num = num + 2;
            printf("%d", num);
            sleep(1);
        }
    }
}

int main()
{
    forkProccess();
    return 0;
}