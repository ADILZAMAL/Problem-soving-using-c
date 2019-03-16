#include <stdio.h>
#include <stdlib.h>

int main()
{
  unsigned char a=5,b=9;   //we can use char to store int upto 8 bit(0-250) bcz char is also 8 bit 
   printf("a&b=%d\n",a&b);
   printf("a|b=%d\n",a|b);
   printf("a^b=%d\n",a^b);
    printf("~a=%d\n",a=~a);   //value of a will change to not a bcz not a we are assigning in a
   printf("a<<1=%d\n",a<<1);
   printf("a<<2=%d\n",a<<2); 
   printf("b>>1=%d\n",b>>1);

   return 0;
}
