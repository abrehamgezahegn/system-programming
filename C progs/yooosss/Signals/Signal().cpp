// Overwriting signalhandler using signal()
// Here we are overwriting the SIGINT

#include<stdio.h>
#include<signal.h>
#include<windows.h>

void handle_sigint(int mysignal){
// Signal handler
printf("My handle with signal %d\n", mysignal);
Sleep(2000);
}

int main()
{
    signal(SIGINT, handle_sigint); //Overwrite the previous handler
    while (1)
    {
        printf("hello world\n");
        Sleep(200);
    }
    return 0;
}
