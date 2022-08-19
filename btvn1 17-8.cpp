#include<stdio.h>
int main(){
	int n,x,kc;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("Nhap x:");
	scanf("%d",&x);
	
	int arr[n];
	printf("kich thuoc mang %d");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int j=0;
	kc=(arr[0]-x);
	for (int i=0;i<n;i++){
		if(x>=arr[i]){
			if(x-arr[i]>kc){
				kc=x-arr[i];
				i=j;
			}
			}else{
			if(arr[i]-x>kc){
				kc=arr[i]-x;
				j=i;
			}
		}
	}
	printf("so xa x nhat la %d",arr[j]);
}
