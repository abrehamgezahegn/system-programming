#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main()
{
  pid_t userId = getuid();
  pid_t groupId = getgid();
  printf("%d \n", userId);
  printf("%d \n", groupId);

  return 0;
}
