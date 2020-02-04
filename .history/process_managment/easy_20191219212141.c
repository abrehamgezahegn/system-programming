#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main()
{
  pid_t userId = geteuid();
  pid_t groupId = getegid();
  printf("%d \n", userId);
  printf("%d \n", groupId);

  return 0;
}
