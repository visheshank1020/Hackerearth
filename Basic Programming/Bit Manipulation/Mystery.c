#include<stdio.h>
int count_one(long long n)
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}

int main()
{
    register int ch; //for fast I/O operation
    int f=0;
    long long data=0;
    while(1)
    {
        while(1)
        {
            ch=getchar();
            if(ch>47 && ch<58)
                data = (data<<1) + (data<<3) +ch -48; 
            else
                if(ch==-1)
                {
                    f=1;
                    break;
                }
                else
                    break;
        }
        printf("%d\n",count_one(data));
        if(f)
            break;
        data=0;
    }
}
