#include<stdio.h>

int main(){
	int a[100];
	int i,n;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d", (a+i));
	}
	int *max;
	max = a;
	for(i=0; i<n; i++){
		if(*max < *(a+i)){//aldaa1
			*max = *(a+i);
		}
	}
	printf("%d\n",*max);//aldaa2 * bh eseh
	return 0;
}

