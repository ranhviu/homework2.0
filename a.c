#include <stdio.h>
#include <math.h>
int main()
{
	double i=1,a=0,y=1;
	while(y>=1e-10)
	{
		a=a+y;
	        i=i+1;
		y=pow(1/i,2);
	}
	a=sqrt(6*a);
	printf("pi=%10.8f\n",a);
	return 0;
}

