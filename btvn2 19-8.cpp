#include<stdio.h>
#include<math.h>
int dientich(int a,int b,int c){
	float p=(a+b+c)/2
	
	
	float s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main(){
	int x=3;
	int y=4;
	int z=5;
	int v=dientich(x,y,z);
	printf("dien tich = %d",v);
	
}
