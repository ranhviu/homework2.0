# include <stdio.h>
# include <math.h>
# include "test.h"
double fun(int x)
{
  int n=1;
  double a=0,i=1,y=1;
  while(fabs(y)>=pow(10,-x))
    {
      a=a+y;
      i=i+2;
      n=-n;
      y=n/i;
    }
  a=a*4;
  printf("pi=%.*f\n",x,a);
  return 0;
    }

  
