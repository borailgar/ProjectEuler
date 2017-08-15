#include "stdio.h"
#include "stdlib.h"
#include "limits.h"
//solution : 23514624000
int main(int argc, char const *argv[]) {
FILE * euler = fopen("test.txt","r");
int num,i=0, arr[1000];
while (fscanf(euler,"%1d",&num)>= 0) {
   arr[i]=num;
   i++;
}
//making the greatest product that contains 13 digits
 long int valar=1;
 int k,j;
 long int max=arr[0];

  for ( k = 0; k <=988; k++) {
    valar=1;
       for(j=0;j<13;j++){
         valar=(long)valar*arr[k+j];
       }

         if(max<valar){
            max=valar;
         }
}
printf("%lu\n",max );
  return 0;
}
