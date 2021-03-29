#include <stdio.h>
int main ()
{
    long int n;
    int m,i,a;
    scanf("%ld %d",&n,&m);
    for (i=0;i<n;i++)
    {
        n++;
        a=n%10;
        if(a==m)
        {
            break;
        }
    }
    printf("%ld",n);
}
