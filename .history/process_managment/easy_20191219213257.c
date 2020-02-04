#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main()
{
  // pid_t userId = gete   uid();
  // pid_t groupId = getegid();
  // printf("%d \n", userId);
  // printf("%d \n", groupId);
  printf("%d", getpid());
  // while (1)
  //   ;

  return 0;
}
