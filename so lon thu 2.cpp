#include <stdio.h>
int main(){
    int a[10],n,i,max,max2;
    do{

    printf("nhap n =");
    scanf("%d",&n);
    }while (n<1);
    for (i=1;i<=n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        }



        max=a[1];
    for (i=1;i<=n;i++){
        if (max<a[i]){
            max=a[i];}

        }
    for (i=1;i<=n;i++){
        if (max==a[i]){
            continue;
            }else 
            if (max2<a[i]){
                max2=a[i];}

        }

    printf("so lon gan thu nhat=%d",max2);


    }
