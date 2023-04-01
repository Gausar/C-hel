#include<stdio.h>
int *search(int a[],int value, int size);
int main(){
	int n,m;
	int a[100];
	printf("husnegtiin hemjee n = ");
	scanf("%d",&n);
	printf("husnegtiinhee elementuudee oruulna uu\n");
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("haih gej bgaa value = ");
	scanf("%d",&m);
	int *utga = search(a,m,n);
	printf("ug too husnegtiin << %d >>-dahi baganad bn",*utga);
	return 0;
}

int *search(int a[],int value, int size){
	//int b[100];
	//int j=0;
	for(int i=0; i<size;i++){
		if(a[i]==value){
			int s=i;
			return &a[s];
			//b[j]=i;
			//j++;
		}
	}
	
}
