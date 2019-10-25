/*Author:: Suman Pramanik
Dynamic Programming*/

#include<stdio.h>
int num_way(int mem[],int n)
{
    if(n<=3)
        return mem[n];
    else
        if(mem[n]!=0)
            return mem[n];
        else
        {
            mem[n]=num_way(mem,n-1)+num_way(mem,n-2)+num_way(mem,n-3);
            return mem[n];
        }
    
}
int main()
{
    int n,mem[31]={0};
    scanf("%d",&n);
    mem[0]=1;
    mem[1]=1;
    mem[2]=2;
    mem[3]=4;
    printf("%d",num_way(mem,n));
}
