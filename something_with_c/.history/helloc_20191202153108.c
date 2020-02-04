#include <stdio.h>

void forkProccess()
{

    if (fork() == 0)
    {
        system("./search.bash")
    }
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