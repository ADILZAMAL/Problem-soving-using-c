#include<stdio.h>
int n;
void rec(int a)
{
    printf("%d ",a);
    if(a<=0)
        return ;
    else
        rec(a-5);
        printf("%d ",a);


}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        rec(n);
    }
	//code
	return 0;
}
