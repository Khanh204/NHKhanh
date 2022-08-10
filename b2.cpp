#include<stdio.h>

int main(){
	int n,i;
	printf("Nhap n =");
	scanf("%d",&n);
	

	i = 1;
	while(i <= n){
		if(n % 1 == 0)
		printf("%d",i);
		i++;
	}
	
	return 0;
}
