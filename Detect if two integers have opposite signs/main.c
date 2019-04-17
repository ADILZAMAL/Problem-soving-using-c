//xor of positive and negative number is always negative
//bcz sign  bit of positive number is 0 and negative number
//is 1 and xor of 0 and 1 is 1 which indicates negative
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool checkSign(int x,int y){
return ((x^y)<0);
}
int main()
{
 int x=10,y=-5;
 if(checkSign(x,y)== true)
    printf("Sign are opposite");
    else
        printf("Sign are not opposite");
    return 0;
}
