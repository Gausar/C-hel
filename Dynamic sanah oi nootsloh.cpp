#include<stdio.h>
#include<stdlib.h>

void read(int *hus, int n);
void max_min(int *hus, int n, int *max, int *min);
int find(int *hus, int n, int x);

int main(){
	int n, x, *hus, max, min;
	printf("elementiin toogoo oruul : ");
	scanf("%d",&n);
	
	//sanah oig dinamicaar zarlaj bgaa
	
	hus = (int*) malloc(n * sizeof(int));
	
	//sanah oi nootsloogui bol NULL utga awna
	if(hus == NULL){
		printf("Aldaa garlaa! ");
		exit(0);
	}
	
	//hereglegchiin garaas husnegtiin utguudaa awch bn 
	read(hus, n);
	
	//ug husnegt dehi max min utguudiig olj bna
	max_min(hus, n, &max, &min);//max-iin hayag s, min-iin hayag k
	
	printf("haih toogoo oruulna uu : x = ");
	scanf("%d",&x);
	printf("toog hailaa : ");
	
	//find functionees butsaj irsen utga 1tei tentsuu bwal haisan too oldloo gsn ug
	
	if(find(hus,n,x) == 1){
		printf("ug too oldloo");
	}
	else printf("ug too ni bhgu bn");
	
	//nootslogdson sanah oig cholooloh hrgtei
	free(hus);
	return 0;
}
//garaas utga unshih funkts
void read(int *hus, int n){
	printf("husnegtiinhee elementuudee oruulna uu:\n");
	for(int i=0; i<n; i++){
		scanf("%d", hus+i);
	}
}
//max min utga oloh
void max_min(int *hus, int n, int *max, int *min){
	*min = *hus;
	*max = *hus;
	for(int i=0; i<n; i++){
		if(*(hus+i)<*min){
			*min = *(hus+i);
		}
		if(*(hus+i)>*max){
			*max = *(hus+i);
		}
	}
	printf("max = %d, min = %d\n",*max, *min);
}

//toog haih funkts end heregjine
int find(int *hus, int n, int x){
	int p=0;
	for(int i=0; i<n; i++){
		if(*(hus+i)==x){
		}
		else p++;
	}
	if(p==n){
		return 0;
	}
	else return 1;
}

