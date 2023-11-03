#include<stdio.h>
int main()
{
	int i,n,r,ds=0;
	scanf("%d",&n);
	while(n!=0)//0!=0
	{
		r=n%10;//r=1
		ds=ds+r;
		n=n/10;//n=0
	}
	printf("%d",ds);
}