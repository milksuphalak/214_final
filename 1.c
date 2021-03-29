#include <stdio.h>
int main ()
{
    int n;
    int c,i,a;
    scanf("%d %d",&n,&c);
    if(n==99||n==999||n==9999&&c==1)
    {
        printf("%d",n+1);
    } else
    {
       for (i=0;i<n;i++)
    {
        n++;
        a=n%10;
        if(a==c)
        {
            break;
        }
    }
    printf("%d",n);
    }
return 0;
}
