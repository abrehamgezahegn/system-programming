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
	int pipefd[2];
	int res;
	pid_t p;
	char buf[20];

	res = pipe(pipefd);
	if (res < 0)
	{
		perror("pipe");
		exit(1);
	}

	p = fork();
	if (p < 0)
	{
		perror("fork");
		exit(1);
	}

	else if (p == 0)
	{
		close(pipefd[0]);
		write(pipefd[1], "Hello SE third year", 20);
	}
	else
	{
		close(pipefd[1]);
		read(pipefd[0], buf, sizeof(buf));
		printf("The content is: %s\n", buf);
	}
	return 0;
}
