//Using Execv

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]){

  //argv array for: /bin/ls -l
  char * ls_args[] = { "/bin/ls" , "-l", NULL};
  
  //execute the program
  execv(   ls_args[0],     ls_args);
  
  /*The primary difference between execv and execvp is that
  with execv you have to provide the full path to the binary file
  */

  //only get here on error
  perror("execv");
  return 2;
}
