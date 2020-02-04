#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main()
{
  // pid_t userId = gete   uid();
  // pid_t groupId = getegid();
  // printf("%d \n", userId);
  // printf("%d \n", groupId);
  int count = 0;
  while (1)
  {
    if (count < 1)
      printf("%d", getpid());
  }

  return 0;
}
