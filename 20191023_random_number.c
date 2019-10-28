#include <stdio.h>
#include <stdlib.h>

#define MIN_NUM 0
#define MAX_NUM 100

int random_int(int, int);

int main(int argc, char **argv){

	printf("random number: %d\n", random_int(MIN_NUM, MAX_NUM));

	return 0;
}

int random_int(int min, int max)
{
	time_t t;
	srand((unsigned) time(&t));
	return min + rand() % (max+1 - min);
}
