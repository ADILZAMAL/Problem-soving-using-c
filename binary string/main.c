#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,sum=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);

        for(i=0;i<n;i++)
        {
            sum+=(s[i]-'0');

        }
        printf("%d\n",(sum*(sum-1)/2));

    }
}
