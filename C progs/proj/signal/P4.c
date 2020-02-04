//Run this code and in another terminal try to find the process ID 
//of this running cody by typing "ps -aux | grep a.out" or "pidof a.out" or "pgrep a.out"
//then type "kill -15 [process id]"

#include <stdio.h>
#include <signal.h>
void handler( int sg)
{
	printf("You send a signal with id %d \n", sg);
}

int main()
{
	signal(SIGTERM, handler);
	while(1)
	{
		printf("Hello World \n");
		sleep(1);
	}
}