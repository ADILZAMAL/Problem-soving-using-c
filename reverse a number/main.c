#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num,a;
 printf("Enter a number ");
 scanf("%d",&num);
 printf("Before reversing number = %d\n",num);
 a=num;
 printf("Number after reversal\n");
 while(a!=0){
 printf("%d",a%10);
 a=a/10;
  }
}

