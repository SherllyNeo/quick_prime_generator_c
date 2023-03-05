#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(int argc, char* argv[]) {
int i,j,c,flag,index=0;
/* Terrible practice to use atoi but I live wild */
int min = atoi(argv[1]);
int max = atoi(argv[2]);
int primes[max];
for (i=min; i<max; ++i) {
	flag = 1;
	for (j=2;j<i;++j) {
		if (i % j == 0) {
			flag = -1;
		}
	}
	if (flag == 1) {

	primes[index] = i;
	index++;
	}
}

/* Variable to help with print formatting, not needed now but keeping it in for nostalgia  */
int loci = 0;
for (c=0;c<index;c++) {
	printf(" %d, ",primes[c]);
	loci++;
}
return 0;
}

