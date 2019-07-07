#include<string.h>
#include<stdio.h>
#define MAX 20
int romanToDecimal(char c)
{
    int value;
    switch(c)
        {
            case 'I':
            value=1;
            break;

            case 'V':
            value=5;
            break;

            case 'X':
            value=10;
            break;

            case 'L':
            value=50;
            break;

            case 'C':
            value=100;
            break;

            case 'D':
            value=500;
            break;

            case 'M':
            value=1000;
            break;

        }
        return value;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[MAX];
        scanf("%s",str);
        int len = strlen(str);
        int ans=romanToDecimal(str[len-1]);

        for(int i=len-2;i>=0;i--)
        {
          if(romanToDecimal(str[i])>=romanToDecimal(str[i+1]))
            ans+=romanToDecimal(str[i]);
          else
            ans-=romanToDecimal(str[i]);
        }
        printf("%d\n",ans);

    }
	//code
	return 0;
}
