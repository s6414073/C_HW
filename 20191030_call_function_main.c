#include <stdio.h>
#include "20191030_getFilesize.h"

#define PASSWD "/etc/passwd"

int main(int argc, char **argv){

	unsigned int filesize = getFilesize(PASSWD);
	printf("file size is %u byte(s)\n", filesize);
	return 0;

}
