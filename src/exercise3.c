#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	if(argc < 2) return 1;

	int k;
	sscanf(argv[1], "%d", &k);

	double array[10];
	for(int i = 0; i < 10; i++) {
                scanf("%lf", &array[i]);
        }

	k = k % 10;
	if(k < 0) k += 10;

	for(int i = 0; i < 10; i++) {
		printf("%g ", array[(i - k + 10) % 10]);
	}
        printf("\n");
        return 0;
}

