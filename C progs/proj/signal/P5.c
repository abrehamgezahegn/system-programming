//Handling many signals

#include <stdio.h>
#include <signal.h>
void handler( int sg)
{
if(sg == SIGINT)
	printf("\nYou press Ctrl+C :  ID = %d \n", sg);
else if(sg == SIGQUIT)
	printf("\nYou press Ctrl+\\ : ID = %d \n", sg);
else if(sg == SIGTSTP)
	printf("\nYou press Ctrl+Z :  ID = %d \n", sg);
}

int main()
{
	signal(SIGINT, handler);
	signal(SIGQUIT, handler);
	signal(SIGTSTP, handler);
	while(1)
	{
		printf("Hello World \n");
		sleep(1);
	}
}
//in order to igonore the signal we make this programm 
signal(int signalcode ,SIG-IGN)
