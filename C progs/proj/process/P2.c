//Stack and Data Variables
#include <unistd.h>
#include <stdio.h>
int main() {
static int x = 5;
int y = 10;
pid_t childPid; 	
switch (childPid = fork()) {
	case -1:
		break;
	case 0:
		x = 0;
		y = 1;
		break;
	default:	/* Give child a chance to execute */
		sleep(3);
break;
}
if(childPid==0)
	printf("Child -  x=%d y=%d \n",  x, y);
else
	printf("Parent -  x=%d y=%d \n",  x, y);
}