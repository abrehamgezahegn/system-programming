#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

    int p1 = fork();

    if (p1 == 0)
    {
        // skip
    }
    else if (p1 > 0)
    {
        print("creating secod child \n");
        int p2 = fork();

        if (p2 == 0)
        {
            // skip
        }
        else if (p2 > 0)
        {
            print("creating thrid child  \n");
        }
    }

    return 0;
}