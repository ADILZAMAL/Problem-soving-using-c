#include<stdio.h>
#include<string.h>
#define MAX 200
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[MAX];
        int i,j,temp;
        scanf("%s",s);
        i=strlen(s)-1;
        j=i;
        while(i!=0)
        {
            if(s[i]=='.')
            {
                for(temp=i+1;temp<=j;temp++)
                {
                    printf("%c",s[temp]);
                }
                printf(".");
                j=i-1;

            }
            i--;
        }
        i=0;
        while(i<=j)
        {
           printf("%c",s[i]);
           i++;
        }

        printf("\n");
    }

}
