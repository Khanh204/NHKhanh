#include<stdio.h>
int tinhtongcacchuso(int n){
	int s=0;
	int a;
	while(n>0){
		a=n%10;
		s+=a;
		n/=10;
		
	}
	return s;
}
int main(){
	int x=123;
	int y=tinhtongcacchuso(x);
	printf("tong = %d",y);
}
