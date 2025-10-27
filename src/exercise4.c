#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
        if(argc < 3) return 1;

        double x;
	int k;
	sscanf(argv[1], "%lf", &x);
        sscanf(argv[2], "%d", &k);

        double array[10];
        for(int i = 0; i < 10; i++) {
                scanf("%lf", &array[i]);
        }
	
	for(int i  = 9; i > k; i--) {
		printf("%g ", array[i]);
	}
        printf("\n");
        return 0;
}


