#include "stdio.h"


int main(int argc, char **argv)
{
	int arr[3][3];
	//arr[0][0]=1;
   for (int i = 0; i <3; ++i)
   {
   	for (int j = 0; j <3; ++j)
   	{
   	
   		arr[i][j]=0;
   	}
   }
arr[0][0]=1;
arr[2][2]=1;

for (int i = 0; i < 3; ++i)
{
	for (int j = 0; j < 3; ++j)
	{
		printf("%d ",arr[i][j] );
	}
	printf("\n");
}





  return 0;
}