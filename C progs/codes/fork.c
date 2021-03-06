
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	pid_t pid;
	char cwdir_cld[100];
	char cwdir_prt[100];

	if ((pid = fork()) < 0)
	{
		perror("fork error");
		exit(1);
	}

	if (pid == 0)
	{
		/* 
	   *  Now we are in the childs thread 
	   *  let us issue a chdir syscall :)
	   */
		if (chdir("/tmp") < 0)
		{
			perror("chdir error");
		}

		/* 
		 * Let us now print the current working directory of the child
		 */
		if (getcwd(cwdir_cld, 100) != NULL)
		{
				printf("
Current working directory of the child is : %s", cwdir_cld);
		}
		else
		{
				perror("
getcwd error");
		}

		/* end of the child */
	}
	else
	{
		/* 
	   * Now we are in the parent thread
	   * Let is check the current working directory
	   */
		if (getcwd(cwdir_prt, 100) != NULL)
		{
				printf("
Current working directory of the parent is : %s", cwdir_prt);
		}
		else
		{
				perror("
getcwd error");
		}
	}

		printf("
");
	return(0);
}
