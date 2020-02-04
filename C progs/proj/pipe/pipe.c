#include <unistd.h>
#include<stdio.h>
#include <sys/types.h>
 #include <unistd.h>
#include<stdlib.h>
int main()
{
pid_t pid;
char buf[23];
int p;
int fd[2];
p=pipe(fd);
pid=fork();
if(pid>0){
printf("parent is writing\n");
close(fd[0]);
write(fd[1],"hi deva",7);

}
else if(pid==0){
printf("child is reading now\n");
close(fd[1]);
read(fd[0],buf,sizeof(buf));
printf("the content is\n %s",buf);

}

return 0;


}
