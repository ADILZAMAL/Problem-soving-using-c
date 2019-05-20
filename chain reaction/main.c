#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r,c,i,j;
        scanf("%d%d",&r,&c);
        int mat[r][c];
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&mat[i][j]);
            }
         }
         int flag=1;
         for(i=0;i<r;i++)
         {
             for(j=0;j<c;j++)
             {
               if((i==0&&j==0)||(i==0&&j==c-1)||(i==r-1&&j==0)||(i==r-1&&j==c-1))
                {
                    if(mat[i][j]>=2)
                       {
                          flag=0;
                        break;
                       }
                }
                else if((i==0)||(j==0)||(i==r-1)||(j==c-1))
                {
                    if(mat[i][j]>=3)
                       {
                         flag=0;
                        break;
                       }
                }
                else{

                    if(mat[i][j]>=4)
                    {
                        flag=0;
                        break;
                    }

                }
            }
        }
        if(flag==1)
            printf("Stable\n");
        else
            printf("Unstable\n");
            flag=1;
    }
}
