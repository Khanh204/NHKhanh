#include<stdio.h>
int tinhchuvi(int a,int b,int c){
	int cv=a+b+c;
	return cv;
}
int main(){
	int x=3;
	int y=4;
	int z=5;
	int v=tinhchuvi(x,y,z);
	printf("Chu vi = %d",v);
}


