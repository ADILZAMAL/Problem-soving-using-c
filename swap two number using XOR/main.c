#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10,y=5;
    printf("value of x=%d\tvalue of y=%d\n",x,y);
    x=x^y;
    y=y^x;
    x=x^y;
   printf("value of x=%d\tvalue of y=%d\n",x,y);

}
