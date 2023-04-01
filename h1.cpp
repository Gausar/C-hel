#include<stdio.h>
void find(int a[][100], int n, int m, int *min, int *max);
int main(){
	int n,m,min,max;
	int a[100][100];
	printf("husnegtiin mor baganii hemejeesee oruulna u\n");
	scanf("%d%d",&n,&m);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	find(a,n,m,&min,&max);
	printf("min = %d\n",min);
	printf("max = %d\n",max);
	return 0;
	
}
void find(int a[][100], int n, int m, int *min, int *max){
	*min=a[0][0];
	*max=a[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(*min>a[i][j]){
				*min=a[i][j];
			}
			if(*max<a[i][j]){
				*max=a[i][j];
			}
		}
	}
	
}

