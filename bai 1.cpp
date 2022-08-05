#include<stdio.h>
int main(){
	int a;
	printf("Nhap so a=");
	scanf("%d",&a);
	int r;
	r = a;
	if (r>0){
		printf("%d la so duong",a);
	}else{
		printf("%d khong phai la so duong",a);
	}
}
