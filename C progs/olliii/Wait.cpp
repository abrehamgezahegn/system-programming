//
// FORK AND WAIT //
//


/* This code demostrates the wait() system call
	it makes the parent wait until the child is finished
	executing.
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char * argv[]){
  //run: ls  -l /bin
  char * ls_args[3] = { "ls", "-l", NULL} ;
  pid_t c_pid, pid;
  int status;

  c_pid = fork();

  if (c_pid == 0){
    /* CHILD */

    printf("Child: executing ls\n");

    //execute ls
    execvp( ls_args[0], ls_args);
    //only get here if exec failed
    perror("execve failed");
  }
  
  else if (c_pid > 0){
    /* PARENT */
	
    if( (pid = wait(&status)) < 0){// Waits until its child finishes 
      perror("wait");
      _exit(1);
    }

    printf("Parent: finished\n");

  }
  
  else{
    perror("fork failed");
    _exit(1);
  }

  return 0; //return success
}
