#include<stdio.h>
int main()
{
    int i,M,N,mult=0;
    scanf("%d%d",&M,&N);
    for(i=M;i<=N;i++)
    {
        if(i%3==0)
        mult++;
    }
    printf("%d",mult);
}  
    
