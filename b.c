#include <stdio.h>
#include <math.h>
int main(void)
{
	long long int fun(int n);
	int a,b,z,i;
	long long int c,d;
	long double x,pi,f,g,h;
	long double y=0.0;
	printf("请输入pi的位数(最大为7):");
        scanf("%d",&z);
	for(i=1;i<=z;i++)
	{

		a=4*i;
		b=i;
		c=fun(a);
		d=fun(b);
		f=pow(8.0f,1.0f/2.0f)/pow(99.0f,2.0f);
		g=1103.0f+2639.0f*i;
		h=pow(d,4.0f)*pow(396.0f,a);
		x=f*c*g/h;
		y=x+y;
	}
        
        y=y+pow(8.0f,1.0f/2.0f)*1103.0f/pow(99.0f,2.0f);
	pi=pow(y,-1.0f);
	printf("pi=%.*Lf\n",z,pi);
	return 0;

}

long long int fun(int n)
{
        
       	long long int sum=1;
        long long int j;
        for(j=1;j<=n;j++)

	 sum=sum*j;
	return sum; 

}


