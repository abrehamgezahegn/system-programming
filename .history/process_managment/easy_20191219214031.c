#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main()
{
  pid_t userId = geteuid();
  pid_t groupId = getegid();
  printf("%d \n", userId);
  printf("%d \n", groupId);

  setuid(1999);

  printf("Atfter setting IDs");
  printf("%d", geteuid());

  return 0;
}
