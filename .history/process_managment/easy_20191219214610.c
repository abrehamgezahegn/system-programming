#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main()
{
  pid_t userId = geteuid();
  pid_t groupId = getegid();
  printf("%d \n", userId);
  printf("%d \n", groupId);

  uid_t ruid, euid, suid;

  int res = getresuid(uid_t * ruid, uid_t * euid, uid_t * suid);

  printf("%d %d %d %d", ruid, euid, suid, res);

  return 0;
}
