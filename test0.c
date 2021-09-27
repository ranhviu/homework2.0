#include <stdio.h>


long int fun(int i)
{
	int sum;
        if(i == 0)
	{
		sum=1;
	}
	else{

		sum=i*fun(i-1);
	}
		return sum;
}

int main(void)
{ 
        long long y;
	int x;
	scanf("%d",&x);
	y=fun(x);
	printf("%lld\n",y);
	return 0;
}




