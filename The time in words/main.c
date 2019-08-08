#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int h,m;
    scanf("%d",&h);
    scanf("%d",&m);
    char words[30][100];
    strcpy(words[0],"one");
    strcpy(words[1],"two");
    strcpy(words[2],"three");
    strcpy(words[3],"four");
    strcpy(words[4],"five");
    strcpy(words[5],"six");
    strcpy(words[6],"seven");
    strcpy(words[7],"eight");
    strcpy(words[8],"nine");
    strcpy(words[9],"ten");
    strcpy(words[10],"eleven");
    strcpy(words[11],"twelve");
    strcpy(words[12],"thirteen");
    strcpy(words[13],"fourteen");
    strcpy(words[14],"fifteen");
    strcpy(words[15],"sixteen");
    strcpy(words[16],"seventeen");
    strcpy(words[17],"eighteen");
    strcpy(words[18],"nineteen");
    strcpy(words[19],"twenty");
    strcpy(words[20],"twenty one");
    strcpy(words[21],"twenty two");
    strcpy(words[22],"twenty three");
    strcpy(words[23],"twenty four");
    strcpy(words[24],"twenty five");
    strcpy(words[25],"twenty six");
    strcpy(words[26],"twenty seven");
    strcpy(words[27],"twenty eight");
    strcpy(words[28],"twenty nine");
    strcpy(words[29],"thirty");

if(m==0)
    printf("%s o' clock",words[h-1]);
else if(m==1)
     printf("%s minute past %s",words[m-1],words[h-1]);
else if(m>1&&m<15)
    printf("%s minutes past %s",words[m-1],words[h-1]);
else if(m==15)
    printf("quarter past %s",words[h-1]);
else if(m>15&&m<30)
    printf("%s minutes past %s",words[m-1],words[h-1]);
else if(m==30)
    printf("half past %s",words[h-1]);
else if(m==45)
    printf("quarter to %s",words[h]);
else if(m==59)
    printf("one minute to %s",words[h]);
else if(m>30&&m<59)
    printf("%s minutes to %s",words[60-m-1],words[h]);

}
