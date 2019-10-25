#include<stdio.h>

int main()
{
    int t,m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        if(m%n)
            printf("No");
        else
            printf("Yes");
        printf("\n");
    }
}
