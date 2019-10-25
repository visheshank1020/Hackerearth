#include<stdio.h>

int main()
{
    int i,s,t,h1[26]={0},h2[26]={0};char s1[10000],s2[10000];
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        scanf("%s",s1);
        scanf("%s",s2);
        for(i=0;i<strlen(s1);i++)
            h1[s1[i]-97]++;
        for(i=0;i<strlen(s2);i++)
            h2[s2[i]-97]++;
        for(i=0;i<26;i++)
            s=s+abs(h1[i]-h2[i]);
        printf("%d\n",s);
    }
}
