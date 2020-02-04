#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/ipc.h>
#include <string.h>

int main()
{
	int pipeData[2];
	int res;
	pid_t p;
	char buf[20];

	res = pipe(pipeData);
	if (res < 0)
	{
		printf("pipe");
		exit(1);
	}

	p = fork();
	if (p < 0)
	{
		printf("fork");
		exit(1);
	}

	else if (p == 0)
	{
		close(pipeData[0]);
		write(pipeData[1], "aeiou", 5);
	}
	else
	{
		close(pipeData[1]);
		read(pipeData[0], buf, sizeof(buf));
		printf("The content is: %s\n", buf);
	}
	return 0;
}
