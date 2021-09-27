#include <stdio.h>
int main()
{
	int n,i;
	long long sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	printf("n!=%lld\n",sum);
	return 0;
}


