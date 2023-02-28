# Printing_internal_bit_representation_of_integer


Prints numbers from 3 to 15 and it's internal bits or so.

```
Shashis-MacBook-Air:c_programs shashikiran$ ./ascii
MAX POW : 2147483648
i = 0, num = 2
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 
i = 0, num = 3
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 
i = 0, num = 4
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 
i = 0, num = 5
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 1 
i = 0, num = 6
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 
i = 0, num = 7
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 
i = 0, num = 8
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 
i = 0, num = 9
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 1 
i = 0, num = 10
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 1 0 
i = 0, num = 11
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 1 1 
i = 0, num = 12
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 
i = 0, num = 13
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 1
```

```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

```
