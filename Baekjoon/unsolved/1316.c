#include<stdio.h>
int isGroup(char*);
int main()
{
    int n,i,total=0;
    char in[101];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        gets(in);
        if(isGroup(in)==0)
        total++;
    }
    printf("%d",total);
    return 0;
}
int isGroup(char in[101])
{
    
}