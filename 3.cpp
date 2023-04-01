#include<stdio.h>

void find(int a[], int n, int *addr, int *addr1);

int main(){
	int n, a[100];
	int d,k;
	printf("husnegtiin hemjee n = ");
	scanf("%d",&n);
	for(int i=0; i < n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	find(a,n,&d,&k);
	//d husnegiin elementiin utgiin hadgalna
	//k tuhain elementiin haygiig hadgalna
	printf("hamgiin olon dawtagdsan too %d\n",d);
	printf("ug too %d udaa orson bn \n",k);
	return 0;
}
void find(int a[], int n, int *addr, int *addr1){
	int k=0,d,j;
	for(int i=0; i<n; i++){
		int tooluur=0;
		for(j=0; j<n; j++){
			if(a[i]==a[j]){
				tooluur++;
			}
		}
		
		if(tooluur>k){
			k=tooluur;
			d=a[i];
		}
	}
	*addr=d;
	*addr1=k;
}
