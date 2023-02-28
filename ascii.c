#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Testing the code.

int main () {

    int num = 2;
    int i=0;
    unsigned int size = sizeof(unsigned int);
    unsigned int maxPow = 1<<(size*8-1);
    printf("MAX POW : %u\n",maxPow);

    for ( int count= 3; count < 15; count++ ) {
            printf ( "i = %d, num = %d\n",i, num );
	    for(;i<size*8;++i){
		    // print last bit and shift left.
		    printf("%u ",num&maxPow ? 1 : 0);
		    num = num<<1;
	    }
	    printf("\n");
           
	    i=0;
	    num = count;
    }
    return 1;
}
