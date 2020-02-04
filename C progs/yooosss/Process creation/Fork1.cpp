//
// FORK //
//

// This is an example code on fork
// and what it returns. fork has two returns
// on to the child and one to the parent
// It returns 0 to the child and return the PID of
// it child to its parent



#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void forkexample()
{
	int x = 1;

	if (fork() == 0)
		printf("Child has x = %d\n", ++x);
	else
		printf("Parent has x = %d\n", --x);
}
int main()
{
	forkexample();
	return 0;
}


//The Output!
/*Parent has x = 0
Child has x = 2
     (or)
Child has x = 2
Parent has x = 0
*/
