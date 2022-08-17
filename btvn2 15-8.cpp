#include <stdio.h>
int main(){
    int a[100],i,n,d;
    printf("nhap n:");
    scanf("%d",&n);
    for (i=0;i<=n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        }
        d=0;
        float tb;
        int s=0;
    for (i=0;i<=n;i++){
        if (a[i] %2==1 && a[0]%2==1){
            if (i%2==0 ){
            d+=1;
            s=s+a[i];
            tb=s/(float)d;
			}
            }
         }
         printf("trung binh cong =%.2f",tb);
    }
