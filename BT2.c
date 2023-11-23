#include <stdio.h>
int product(int a,int b){
	int c = a * b;
	printf("%d * %d = %d\n",a,b,c);
}
int divide(int a,int b){
	int c = a/b;
	printf("%d/%d = %d\n",a,b,c);
}
int main(){
	int a,b,c;
	printf("Nhap vao 3 so a b c: ");
	scanf("%d %d %d",&a,&b,&c);
	
	product(a,b);
	if(a>b){
		if(a%b==0){
			divide(a,b);
		}else{
			printf("%d khong chia het cho %d\n",a,b);
		}
	}else{
		if(b%a==0){
			divide(b,a);
		}else{
			printf("%d khong chia het cho %d\n",b,a);
		}
	}
printf("\n");
	product(b,c);
	if(b>c){
		if(b%c==0){
			divide(b,c);
		}else{
			printf("%d khong chia het cho %d\n",b,c);
		}
	}else{
		if(c%b==0){
			divide(c,b);
		}else{
			printf("%d khong chia het cho %d\n",c,b);
		}
	}
printf("\n");
	product(a,c);
	if(a>c){
    	if(a%c==0){
			divide(a,c);
		}else{
			printf("%d khong chia het cho %d\n",a,c);
		}
	}else{
		if(c%a==0){
			divide(c,a);
		}else{
			printf("%d khong chia het cho %d\n",c,a);
		}
	}
}
