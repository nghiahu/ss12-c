#include <stdio.h>
#include <math.h>
int key =0;
int prime (int k ){
	int j;
	if (k>=2){
		for( j = 0;j<sqrt(k);j++){
			if(k%j==0){
				key = 1;
				break;
			}
		}
	}else{
		key = 1;
	}
}
int main(){
	int n,m,i;
	printf("Nhap vao so phan tu cua mang firstNumbers: ");
	scanf("%d",&n);
	int firstNumbers[n];
	printf("Nhap gia tri phan tu cua mang\n");
	for ( i = 0;i < n;i++){
		printf("firstNumbers[%d]=",i);
		scanf("%d",&firstNumbers[i]);
	}
	printf("\nNhap vao so phan tu cua mang secondNumbers:");
	scanf("%d",&m);
	int secondNumbers[m];
	printf("Nhap gia tri phan tu cua mang\n");
	for (i = 0;i < m;i++){
		printf("secondNumbers[%d]=",i);
		scanf("%d",&secondNumbers[i]);
}
	printf("Cac so nguyen to cua mang firstNumbers: ");
	for(i = 0; i < n; i++){
		key = 0;
		prime(firstNumbers[i]);
		if(key==0){
			printf("%d\t",firstNumbers[i]);
		}
	}
	printf("\nCac so nguyen to cua mang secondNumbers: ");
	for(i = 0; i < m; i++){
		key = 0;
		prime(secondNumbers[i]);
		if(key=0){
			printf("%d\t",secondNumbers[i]);
		}
	}
}
