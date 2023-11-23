#include <stdio.h>
int sum ( int a, int b ){
	int c = a + b;
	printf("%d + %d = %d\n",a,b,c);
}
int difference (int a, int b){
	int c = a -b;
	printf("%d - %d = %d\n",a,b,c);
}
int main(){
	int a, b, c;
	printf("Nhap vao a, b, c");
	scanf("%d %d %d",&a,&b,&c);
	sum(a,b);
	if( a>b) difference(a,b);
	else  difference(b,a);
	
	sum(b,c);
	if (b>c) difference(b,c);
	else  difference(c,b);
	
	sum(a,c);
	if (a>c) difference(a,c);
	else  difference(c,a);
}
