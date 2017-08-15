//Project Euler Problem : 11

#include "stdio.h"

int main(int argc, char const *argv[])
{
  int num;
 int arr[20][20];
  FILE * sol =fopen("sol.in","r");
  FILE * eul =fopen("eul.out","w+");
  
   for (int i = 0; i < 20; ++i)
  {
  	  for (int j = 0; j < 20; ++j)
  	  {
  	  	  fscanf(sol,"%2d",&num);
  	  	  arr[i][j]=num;
  	  }
  }
   int max=0;
   int left;
  //left-right
   for ( int i = 0; i<20; ++i)
   {         //sum=1;
       for (int j = 0;j<17; ++j)
       {
          left=arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
             if (left>max) max=left;
             fprintf(eul," %d -> %d\n",left,max );
       }
   } 
  //up-down
   int up;
      for ( int i = 0; i<17; ++i)
   {         //sum=1;
       for (int j = 0;j<20; ++j)
       {
          up=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
            if (up>max) max=up;

       }
   } 
   
  //diagonal
   int diag;
      for ( int i = 0; i<17; ++i)
   {         //sum=1;
       for (int j = 0;j<17; ++j)
       {
          diag=arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
            if (diag>max) max=diag;

       }
   } 

  //diagonal-reverse
      for ( int i = 0; i<17; ++i)
     {         //sum=1;
       for (int j = 3;j<20; ++j)
       {
          diag=arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3];
             if (diag>max) max=diag;

       }
   } 
printf("%d\n",max );
	return 0;
}