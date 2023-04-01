#include<stdio.h>
void find(int a[], int n, int *addr, int *addr1);

int main(){
	int n;
	int a[100];
	int s, k;
	printf("husnegtiin hemjeeg oruul n  =  ");
	scanf("%d",&n);
	printf("husnegtiin elementuudee oruul\n");
	for(int i=0; i<n;i++){
		scanf("%d",&a[i]);
	}
	find(a,n,&s,&k);
	printf("tegch toonuudiin too %d\n",s);
	printf("sondgoi toonuudiin too %d\n",k);
	return 0;
}

void find(int a[], int n, int *addr, int *addr1){
	int s=0, k=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			s++;
		}
		else {
			k++;
		}
	}
	
	*addr=s;
	*addr1=k;
}

