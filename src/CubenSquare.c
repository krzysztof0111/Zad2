#include "libarea.h"
#include "libvolume.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	double side = atof(argv[1]);
	if(argc == 1){
		printf("Not enough data: Enter the length of square's side.\n");
		exit(EXIT_FAILURE);
	}
	if(side <= 0){
		printf("The side is less than 0. Enter the length of side more than 0.\n");
		exit(EXIT_FAILURE);
	}
	area(side);
	volume(side);
	return 0;
}
