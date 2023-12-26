#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	printf("Cac uoc so la :\n");
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%d ",i);
		}
	}
	printf("\nSo cac uoc so la :\n");
	int souocso=0;
	for(i=1;i<=n;i++){
		if(n%i==0) {
			souocso++;
		}
	}
	printf("%d",souocso);

}
