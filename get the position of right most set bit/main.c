#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Take 2's complement (-n) of the given
number as all bit are reverted except the
first 1 from right to left.
Do an bitwise & with original number
this will return no with the required 1
only . Take the log2 of the number +1 */
unsigned int getRightMostSetBit(int n){
return log2(n&-n)+1;
}
int main()
{
   printf("%u",getRightMostSetBit(18));
   return 0;
}
