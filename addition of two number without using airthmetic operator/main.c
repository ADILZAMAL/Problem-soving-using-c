// Logic is half adder logic
//sum=a xor b
//carry=a&b

#include <stdio.h>
#include <stdlib.h>
int add(int x,int y){
while(y!=0){
    int carry=x&y;
    x=x^y;
    y=carry<<1;
}
return x;
}
int main()
{
    printf("%d",add(5,9));
}
