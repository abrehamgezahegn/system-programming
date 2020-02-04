#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int fd;
	char bufr[11];

	//open a fifo file for reading
	fd = open("./fifoFile", O_RDONLY);

	//read the file in fd
	if (read(fd, bufr, sizeof(bufr)))
		//write(1,bufr,sizeof(bufr));
		printf("the data .. %s\n", bufr);
	//close fd
	close(fd);

	return 0;
}
