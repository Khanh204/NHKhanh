#include<stdio.h>
int main(){
	int n,x,kc,arr[1000],kt;
	printf("nhap n:");
	scanf("%d",&n);
	printf("nhap x:");
	scanf("%d",&x);
	
    for(int i=0;i<n;i++){
	
    scanf("%d",&arr[i]);
}
	kc=1000000;
	for(int i=0;i<n;i++){
		if(x!=arr[i]){
		if(kc>abs(arr[i]-x)){
			kc=abs(arr[i]-x);
			kt=arr[i];
			
		}	
		}
	}
	printf("gia tri gan %d nhat la:",x);
	for(int i=0;i<n;i++){
		if kc==abs(arr[i]-x){
			printf("\t%d",arr[i]);
		}
	}
	
	
	}
	
