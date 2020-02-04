  #include <unistd.h>
       #include <sys/types.h>
#include <stdio.h>

int main(){
int userId =  getuid();
int groupId = getgid();
printf("%d \n" , userId);
printf("%d \n" , groupId);
     

return 0;
}
