// Setting alarm

#include <stdio.h>
#include <signal.h>

/* number of times the handle will run: */
volatile int breakflag = 3;

void handle(int sig) {
    printf("Hello\n");
    --breakflag;
    alarm(1);
}

int main() {
    signal(SIGALRM, handle);
    alarm(1); // Sends SIGALRM after a second
    while(breakflag) { sleep(1); }
    printf("done\n");
    return 0;
}
