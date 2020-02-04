//Signal Handling
//press Ctrl+C  to send a signal

#include <stdio.h>
#include <signal.h>
void handler( int sg)
{
	printf("You send a signal with id %d \n", sg);
}

int main()
{
	signal(SIGINT, handler);
	while(1)
	{
		printf("Hello World \n");
		sleep(1);
	}
}