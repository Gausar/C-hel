#include<stdio.h>
void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a, b;
	printf("*a = ");
	scanf("%d",&a);
	printf("*b = ");
	scanf("%d",&b);
	swap(&a,&b);
	
	printf("utgiin soliloo :) \n");
	printf("a = %d\t b = %d\n",a,b);
	return 0;
}
