#include <stdio.h>
int main ()
{
    int n[3][3],i,j,k,m=0,a=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&n[i][j]);
        }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            m=n[i][j]+n[i][j];
            a=n[i][j]+n[i][j];
        }
    }

    if(m==a)
    {
        printf("YES");
    } else
    {
        printf("NO");
    }*/

}
