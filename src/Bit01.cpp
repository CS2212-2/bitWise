// set and reset bits
//you use the bit operators | (OR) to set a bit and & (AND) to reset a bit, e.g. the program
#include <stdio.h>
int main()
{
    int y=3, C=6;
    printf("y=%x \n", y);
    printf("C=%x \n", C);
           // set bit 0
    printf("~y%x= \n", y);
          // set bit 3
    printf("y%x | C%x \n", y | C);


    printf("C%x|y%x \n", C|y);
         // clear bit 0
    printf("y%x & C%x \n", y & C);
           // clear bit 3


 return 0;
}
