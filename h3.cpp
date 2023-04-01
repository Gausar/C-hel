#include<stdio.h>
void print(int *begin, int *end);
int main(){
	int a[100] = {10,2,3,7,11,3};
	
	print(a,a+6);
	return 0;
}

void print(int *begin, int *end){
	for(int i=0; i<end - begin;i++){
		printf("%d\t",*(begin+i));
	}
}

