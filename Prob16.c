#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[])
{
	double size = log10(2);
	int result=0;
	unsigned long long x = pow(2,15);

    for (int i = 0; i <= size*15; ++i)
    {
    	result+=(x%(int)pow(10,i+1) - x%(int)pow(10,i))/pow(10,i);
    	//printf("%d\n",result );
    	
    }

    printf("Sum of digits: %d\n",result);



	return 0;
}