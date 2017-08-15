
// brute-force ile çözümü

#include <stdio.h>
#include <stdlib.h>

int digitNumbers(int num){// kaç haneli?
	if(num>10 && num<99) return 2;
	else if(num>99 && num<999) return 3;
	else if(num>999 && num<9999) return 4;
	else if(num>9999 && num<99999) return 5;
	else if(num>99999 && num<999999) return 6;
}

int isPolindrome(int num){
	int size=digitNumbers(num);
	int arr[size];

	for(int i=0;i<=size;i++){
       arr[i]=num%10;
       num-=arr[i];
       num/=10;
	}

	for(int j=0;j<size;j++){
          if(arr[j]==arr[size-j])
             return 1;
  	}
	return 0;
}


int main(){
int arr[99999];
for(int i=999;i>99;i--){
   for(int j=999;j>99;j--)
	arr[i]=i*j;
}
for(int k=0;k<999999;k++){
     if(isPolindrome(arr[k])==k)
       break;
       printf("%d", arr[k]);
}

//printf("%d ",isPolindrome(906609));

return 0;

}

